#include <iostream>

using namespace std;

#define MAXT int(1e7+5)

long long dp[MAXT];

int main() {
    int n, t;
    cin >> t >> n;
    for (int i = 1; i <= n; i++) {
        int ti, wi;
        cin >> ti >> wi;
        for (int j = ti; j <= t; j++)
            dp[j] = max(dp[j], dp[j - ti] + wi);
    }
    cout << dp[t] << endl;
    return 0;
}