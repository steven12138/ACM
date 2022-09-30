#include <iostream>
#include <vector>

#define MAXN int(5e5+3)

using namespace std;

vector<int> adj[MAXN];
int p[MAXN][22];
int depth[MAXN];

int n, m, s;

void dfs(int u, int last) {
    depth[u] = depth[last] + 1;
    p[u][0] = last;
    for (int j = 1; j <= 21; j++) {
        p[u][j] = p[p[u][j - 1]][j - 1];
    }
    for (int i = 0; i < adj[u].size(); i++) {
        int v = adj[u][i];
        if (v != last) {
            dfs(v, u);
        }
    }
}

int lca(int a, int b) {
    if (depth[a] < depth[b]) swap(a, b);
//    cout << "step1\n";
    for (int i = 21; i >= 0; i--) {
        if (depth[p[a][i]] >= depth[b]) {
            a = p[a][i];
        }
    }
    if (a == b) return a;
    for (int i = 21; i >= 0; i--) {
        if (p[a][i] != p[b][i]) {
            a = p[a][i];
            b = p[b][i];
        }
    }
    return p[a][0];
}

int main() {
    cin >> n >> m >> s;
    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    depth[s] = 1;
    dfs(s, 0);
    while (m--) {
        int a, b;
        cin >> a >> b;
        cout << lca(a, b) << endl;
    }
    return 0;
}
