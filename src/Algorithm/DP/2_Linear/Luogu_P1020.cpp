#include <iostream>
#include <set>

using namespace std;

#define MAXN int32_t(1e5+3)

#ifdef ONLINE_JUDGE
#define int long long
#endif

struct node {
    int height, d;

    node() = default;

    node(int height, int d) : height(height), d(d) {}

    bool operator<(const node &r) const {
        return d < r.d;
    }
};


int n;

int a[MAXN];

multiset<node> set;

int32_t main() {
    while (cin >> a[++n]) {}
    q.push({a[1], 1});
    for (int i = 1; i <= n; i++) {
        auto [h, v] = q.top();

    }
    return 0;
}