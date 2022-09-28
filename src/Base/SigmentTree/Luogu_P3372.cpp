#include <iostream>

#define MAXN int32_t(1e5+3)

using namespace std;

#define int64_t long long
#define int long long

class SigmentTree {
public:
    auto build(int l, int r, int *a) -> void {
        build_tree(&root, l, r, a);
    }

    auto query(int l, int r) -> int64_t {
        return query(&root, l, r);
    }

    auto change(int l, int r, int d) -> void {
        change(&root, l, r, d);
    }

    auto print() -> void {
        print(&root);
    }

    auto row_print() -> void {
        row_print(&root);
    }

private:
    struct node {
        int64_t v = 0, lazy = 0;
        int l = 0, r = 0;
        node *ch[2]{};
    };

    node root, pool[3 * MAXN];
    int cnt = 0;

    auto print(node *p) -> void {
        pushdown(p);
        if (p->l == p->r) {
            cout << "[dbg]: " << p->l << " " << p->v << endl;
            return;
        }
        print(p->ch[0]);
        print(p->ch[1]);
    }

    auto row_print(node *p) -> void {
//        cout << "[dbg]: " << p->l << " " << p->r << " <" << p->v << " " << p->lazy << "> " << endl;
        if (p->l == p->r) return;
        row_print(p->ch[0]);
        row_print(p->ch[1]);
    }

    auto build_tree(node *p, int l, int r, int *a) -> void {
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

    auto pushdown(node *p) -> void {
        if (!p->lazy) return;
        if (p->l == p->r) {
            p->v += p->lazy;
            p->lazy = 0;
            return;
        }
        p->v += p->lazy * (p->r - p->l + 1);
        p->ch[0]->lazy += p->lazy;
        p->ch[1]->lazy += p->lazy;
        p->lazy = 0;
    }

    auto update(node *p) -> void {
//        cout << "update " << p->l << " " << p->r << endl;
        if (p->l == p->r) return;
        pushdown(p->ch[0]);
        pushdown(p->ch[1]);
        p->v = p->ch[0]->v + p->ch[1]->v;
    }


    auto change(node *p, int l, int r, int64_t d) -> void {
//        cout << "change " << p->l << " " << p->r << " <" << l << " " << r << ">  '" << p->lazy << "' " << endl;
        if (p->l == l && p->r == r) {
            p->lazy += d;
            return;
        }
        pushdown(p);
        if (p->ch[0]->l <= l && p->ch[0]->r >= r) change(p->ch[0], l, r, d);
        else if (p->ch[1]->l <= l && p->ch[1]->r >= r) change(p->ch[1], l, r, d);
        else {
            change(p->ch[0], l, p->ch[0]->r, d);
            change(p->ch[1], p->ch[1]->l, r, d);
        }
        update(p);
    }

    auto query(node *p, int l, int r) -> int64_t {
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
//    st.row_print();
    while (q--) {
        int op;
        cin >> op;
        if (op == 1) {
            int x, y;
            int64_t k;
            cin >> x >> y >> k;
            st.change(x, y, k);
        } else if (op == 2) {
            int x, y;
            cin >> x >> y;
            cout << st.query(x, y) << endl;
        }
//        st.row_print();
    }
    return 0;
}