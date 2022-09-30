#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <climits>

#define MAXN int32_t(1e5+3)
#define int long long

using namespace std;

struct node {
    int v, w;

    node() = default;

    node(int v, int w) : v(v), w(w) {}

    bool operator<(const node &b) const {
        return w > b.w;
    }

};


priority_queue<node> q;

vector<node> adj[MAXN];
int dis[MAXN];
bool vis[MAXN];

template<typename T>
void print(T pq) {
    while (!pq.empty()) {
        cout << pq.top().v << " " << pq.top().w << endl;
        pq.pop();
    }
}

void bfs(int s) {

    dis[s] = 0;
    q.push({s, dis[s]});
    while (!q.empty()) {
        int u = q.top().v;
        q.pop();
        if (vis[u]) continue;
        vis[u] = 1;
        for (auto &[v, w]: adj[u]) {
            if (dis[u] + w < dis[v]) {
                dis[v] = dis[u] + w;
                if (!vis[v]) { q.push({v, dis[v]}); }
            }
        }
    }
}

auto main() -> int32_t {
    int n, m, s;
    cin >> n >> m >> s;

    for (int i = 1; i <= n; i++) dis[i] = 0x7fffffff;

    for (int i = 1; i <= m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].emplace_back(v, w);
    }
//    cout<<"end"<<endl;
    bfs(s);
    for (int i = 1; i <= n; i++) {
        cout << dis[i] << " ";
    }
    cout << endl;
    return 0;
}