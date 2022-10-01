#include <iostream>
#include <queue>
#include <cstring>

#define MAXN int(1e5+3)

using namespace std;

struct edge {
    int u, v;

    edge() = default;

    edge(int u, int v) : u(u), v(v) {}

    bool operator<(const edge &rhs) const {
        if (u != rhs.u) return u > rhs.u;
        return v > rhs.v;
    }
};

void dfs(int u);

void bfs(int s);

bool vis[MAXN];

priority_queue<edge> edges;
vector<int> adj[MAXN];

auto main() -> int {
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        edges.push({u, v});
    }
    while (!edges.empty()) {
        auto [u, v] = edges.top();
        adj[u].push_back(v);
        edges.pop();
    }
    dfs(1);
    cout << endl;
    memset(vis, 0, sizeof(vis));
    bfs(1);
    cout << endl;
    return 0;
}


void bfs(int s) {
    queue<int> q;
    q.push(s);
    vis[s] = true;
    cout << s << " ";
    while (!q.empty()) {
        auto u = q.front();
        for (auto &v: adj[u]) {
            if (!vis[v]) {
                q.push(v);
                cout << v << " ";
                vis[v] = true;
            }
        }
        q.pop();
    }
}

void dfs(int u) {
    cout << u << " ";
    vis[u] = true;
    for (auto &v: adj[u]) {
        if (!vis[v]) {
            dfs(v);
        }
    }
}
