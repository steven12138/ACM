#include <iostream>

using namespace std;

#define MAXN 1005
int a[MAXN][MAXN];
int dp[MAXN][MAXN];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            cin >> a[i][j];
    dp[1][1] = a[1][1];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + a[i][j];
    int mx = 0;
    for (int i = 1; i <= n; i++) mx = max(mx, dp[n][i]);
    cout << mx << endl;
    return 0;
}