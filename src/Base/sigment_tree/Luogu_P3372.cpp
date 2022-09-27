#include <iostream>

#define MAXN int32_t(1e5+3)
#define int long long

using namespace std;

class SigmentTree {
public:
    void build(int l, int r, int *a) {
        build_tree(&root, l, r, a);
    }

    int query(int l, int r) {
        return query(&root, l, r);
    }

    void change(int l, int r, int d) {
        change(&root, l, r, d);
    }

    void print() {
        print(&root);
    }

private:
    struct node {
        int v = 0, lazy = 0;
        int l = 0, r = 0;
        node *ch[2]{};
    };

    node root, pool[3 * MAXN];
    int cnt = 0;

    void print(node *p) {
        pushdown(p);
        if (p->l == p->r) {
            cout << "[dbg]: " << p->l << " " << p->v << endl;
            return;
        }
        print(p->ch[0]);
        print(p->ch[1]);
    }

    void build_tree(node *p, int l, int r, int *a) {
        p->l = l;
        p->r = r;
        if (l == r) {
            p->v = a[l];
            return;
        }
        int mid = (l + r) / 2;
        p->ch[0] = &pool[++cnt];
        p->ch[1] = &pool[++cnt];
        build_tree(p->ch[0], l, mid, a);
        build_tree(p->ch[1], mid + 1, r, a);
        p->v = p->ch[0]->v + p->ch[1]->v;
    }

    static void update(node *p) {
        if (p->l == p->r) return;
        pushdown(p->ch[0]);
        pushdown(p->ch[1]);
        p->v = p->ch[0]->v + p->ch[1]->v;
    }

    static void pushdown(node *p) {
        if (!p->lazy) return;
        if (p->l == p->r) {
            p->v += p->lazy;
            p->lazy = 0;
            return;
        }
        p->v += p->lazy * (p->r - p->l + 1);
        p->ch[0]->lazy = p->lazy;
        p->ch[1]->lazy = p->lazy;
        p->lazy = 0;
    }

    void change(node *p, int l, int r, int d) {
        pushdown(p);
        if (p->l == l && p->r == r) {
            p->lazy += d;
            return;
        }
        if (p->ch[0]->l <= l && p->ch[0]->r >= r) change(p->ch[0], l, r, d);
        else if (p->ch[1]->l <= l && p->ch[1]->r >= r) change(p->ch[1], l, r, d);
        else {
            change(p->ch[0], l, p->ch[0]->r, d);
            change(p->ch[1], p->ch[1]->l, r, d);
        }
        update(p);
    }

    int query(node *p, int l, int r) {
        pushdown(p);
        if (p->l == l && p->r == r) {
            return p->v;
        }
        if (p->ch[0]->l <= l && p->ch[0]->r >= r) return query(p->ch[0], l, r);
        if (p->ch[1]->l <= l && p->ch[1]->r >= r) return query(p->ch[1], l, r);
        return query(p->ch[0], l, p->ch[0]->r) + query(p->ch[1], p->ch[1]->l, r);
    }
};

int a[MAXN];
SigmentTree st;

auto main() -> int32_t {
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    st.build(1, n, a);
    while (q--) {
        int op;
        cin >> op;
        if (op == 1) {
            int x, y, k;
            cin >> x >> y >> k;
            st.change(x, y, k);
        } else if (op == 2) {
            int x, y;
            cin >> x >> y;
            cout << st.query(x, y) << endl;
        }
//        st.print();
    }
    return 0;
}