#include <iostream>
#include <vector>

using namespace std;

#define MAXN int(1e5+3)

vector<int> adj[MAXN];

bool vis[MAXN];
int a[MAXN];

void dfs(int u, int d) {
    if (vis[u]) return;
    vis[u] = 1;
    a[u] = d;
    for (const auto &v: adj[u]) {
        dfs(v, d);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        adj[v].emplace_back(u);
    }
    for (int i = n; i >= 1; i--) {
        dfs(i, i);
    }
    for (int i = 1; i <= n; i++) cout << a[i] << " ";
    cout << endl;
    return 0;
}