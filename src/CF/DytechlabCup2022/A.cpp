#include <iostream>
#include <algorithm>

using namespace std;

void solve();

void solve1();

int main() {
    ios::sync_with_stdio(false);
    int T;
    cin >> T;
    while (T--) solve1();
    return 0;
}

#define MAXN 205

void solve1() {
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;
    sort(s.begin(), s.end());
//    cout << s << endl;
    int div = n / k;
    bool vis[MAXN] = {};
    string st[MAXN];
    for (int i = 1; i <= k; i++) {
        int j = 0;
        while (j < n && st[i].size() < div) {
            if (!vis[j] && j == 0) {
                st[i] += s[j];
                vis[j] = 1;
            }
            if (!st[i].empty()) {
                if (!vis[j] && s[j] == st[i][st[i].size() - 1] + 1) {
                    st[i] += s[j];
                    vis[j] = 1;
                }
            } else {
                if (!vis[j]) {
                    st[i] += s[j];
                    vis[j] = 1;
                }
            }
            j++;
        }
        sort(st[i].begin(), st[i].end());
    }
    for (int i = 1; i <= k; i++) {
        if (st[i].size() < div) {
            for (int d = 1; st[i].size() < div && d < n; d++) {
                if (!vis[d]) {
                    st[i] += s[d];
                    vis[d] = 1;
                }
            }
        }
    }
    string ans;
    for (int i = 1; i <= k; i++) {
//        cout << st[i] << endl;
        if (st[i][0] != 'a') ans += 'a';
        else {
            bool f = 0;
            for (int j = 1; j < st[i].size(); j++) {
                if (st[i][j] != st[i][j - 1] + 1 && st[i][j] != st[i][j - 1]) {
                    ans += static_cast<char>(st[i][j - 1] + 1);
                    f = 1;
                    break;
                }
            }
            if (!f) ans += static_cast<char>(st[i][st[i].size() - 1] + 1);
        }
    }
//    cout << "---" << endl;
    sort(ans.begin(), ans.end(), [](char a, char b) -> bool {
        return a > b;
    });
    cout << ans << endl;
}
