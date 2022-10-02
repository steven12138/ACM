#include <iostream>

using namespace std;
#define int long long

int dp[25][25];
int mp[25][25];

int32_t main() {
    int xb, yb, xm, ym;
    cin >> xb >> yb >> xm >> ym;
    mp[xm][ym] = 1;
    mp[xm - 1][ym - 2] = 1;
    mp[xm - 2][ym - 1] = 1;
    mp[xm - 2][ym + 1] = 1;
    mp[xm - 1][ym + 2] = 1;
    mp[xm + 1][ym - 2] = 1;
    mp[xm + 2][ym - 1] = 1;
    mp[xm + 2][ym + 1] = 1;
    mp[xm + 1][ym + 2] = 1;
    dp[1][0] = 1;
    for (int i = 1; i <= xb + 1; i++) {
        for (int j = 1; j <= yb + 1; j++) {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            if (mp[i - 1][j - 1]) dp[i][j] = 0;
        }
    }
    cout << dp[xb + 1][yb + 1] << endl;
    return 0;
}