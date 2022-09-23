#include <iostream>
#include <queue>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int64_t sum = 0;
    priority_queue<int64_t> q;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'L') {
            sum += i;
            q.push((n - i - 1) - i);
        } else {
            sum += n - i - 1;
            q.push(i - (n - i - 1));
        }
    }
    while (!q.empty()) {
        if (q.top() > 0)
            sum += q.top();
        q.pop();
        cout << sum << " ";
    }
    cout << endl;
}

auto main() -> int {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}