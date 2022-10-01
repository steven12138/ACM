#include <iostream>
#include <set>

using namespace std;

#define MAXN 32770
#define INF 0x7fffff

int a[MAXN];

int main() {
    multiset<int> mst;
    mst.insert(INF);
    mst.insert(-INF);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int ans = a[1];
    mst.insert(a[1]);
    for (int i = 2; i <= n; i++) {
        int x = a[i];
        auto it = mst.insert(x);
        int x1 = *(++it);
        --it;
        int x2 = *(--it);
        ans += min(abs(x - x1), abs(x - x2));
    }
    cout << ans << endl;
    return 0;
}