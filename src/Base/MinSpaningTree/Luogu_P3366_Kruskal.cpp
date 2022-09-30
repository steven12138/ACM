#include <iostream>
#include <queue>

#define MAXN 5005
#define MAXM int(2e5+3)

using namespace std;

struct edge {
    int u, v, w;

    edge() = default;

    edge(int u, int v, int w) : u(u), v(v), w(w) {}

    auto operator<(const edge &b) const -> bool {
        return w > b.w;
    }
};

priority_queue<edge> q;

int f[MAXN];

auto init(int n) -> void {
    for (int i = 1; i <= n; i++) {
        f[i] = i;
    }
}

auto find(int x) -> int {
    if (f[x] == x) return x;
    return f[x] = find(f[x]);
}

auto merge(int a, int b) -> void {
    int fa = find(a);
    int fb = find(b);
    f[fb] = fa;
}

auto main() -> int {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        q.push({u, v, w});
    }
    init(n);
    int ans = 0;
    int cnt = 0;
    while (!q.empty()) {
        auto [u, v, w] = q.top();
        q.pop();
        if (find(u) != find(v)) {
            ans += w;
            merge(u, v);
            if (++cnt == n - 1) break;
        }
    }
    if (cnt == n - 1)cout << ans << endl;
    else cout << "orz" << endl;
    return 0;
}