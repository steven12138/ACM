#include <iostream>
#include <vector>
#include <map>

using std::cin, std::cout, std::endl;

std::map<int, std::vector<int>> s;

auto main() -> int {
    int q;
    cin >> q >> q;
    while (q--) {
        int op;
        cin >> op;
        if (op == 0) {
            int t, x;
            cin >> t >> x;
            s[t].push_back(x);
        } else if (op == 1) {
            int t;
            cin >> t;
            for (const auto &item: s[t]) {
                cout << item << " ";
            }
            cout << endl;
        } else {
            int a, b;
            cin >> a >> b;
            s[b].insert(s[b].end(), s[a].begin(), s[a].end());
            s[a].clear();
        }
    }
    return 0;
}