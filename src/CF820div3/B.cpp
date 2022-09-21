#include <iostream>
#include <cstring>
#include <string>

#define MAXN int(1e4+5)

using namespace std;

inline auto get_rank(char c) -> char {
    return c - '0';
}

auto main() -> int {
    int T;
    cin >> T;
    while (T--) {
        string s;
        int n;
        cin >> n;
        cin >> s;
        string ans;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '0') {
                ans += char(96 + get_rank(s[i - 2]) * 10 + get_rank(s[i - 1]));
                i -= 2;
            } else {
                ans += char(96 + get_rank(s[i]));
            }
        }
        std::reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    return 0;
}