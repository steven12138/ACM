#include <iostream>

using namespace std;

#define MAXT 1005

int dp[2 * MAXT];

int main() {
    int t, n;
    cin >> t >> n;
    for (int i = 1; i <= n; i++) {
        int ti, wi;
        cin >> ti >> wi;
        for (int j = t; j >= ti; j--) {
            dp[j] = max(dp[j], dp[j - ti] + wi);
        }
    }
    cout << dp[t] << endl;
    return 0;
}