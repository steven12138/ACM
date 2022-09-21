#include <iostream>
#include <set>

#define get(a, b, t) \
for (auto it = set[t].begin(); it != set[t].end(); it++) {\
    const string& s = *it;\
    if (!set[a].contains(s) && !set[b].contains(s)) cnt[t] += 3;\
    if (!set[a].contains(s) && set[b].contains(s) || set[a].contains(s) && !set[b].contains(s)) cnt[t] += 1;\
}

using namespace std;

auto main() -> int {
    int T;
    cin >> T;
    while (T--) {
        set<string> set[4];
        int n;
        cin >> n;
        for (int k = 1; k <= 3; k++) {
            for (int i = 1; i <= n; i++) {
                string str;
                cin >> str;
                set[k].insert(str);
            }
        }
        int cnt[4] = {};
        get(2, 3, 1)
        get(2, 1, 3)
        get(3, 1, 2)
        cout << cnt[1] << " " << cnt[2] << " " << cnt[3] << endl;
    }
    return 0;
}