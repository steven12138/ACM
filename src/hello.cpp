#include <iostream>
#include <cmath>
#include <climits>

auto max(int a, int b) -> int { return a > b ? a : b; }

auto min(int a, int b) -> int { return a < b ? a : b; }

auto main() -> int {
    int n;
    while (std::cin >> n) {
        if (n == 0) break;
        int mx = 0, mn = INT_MAX;
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            int a;
            std::cin >> a;
            mx = max(a, mx);
            mn = min(a, mn);
            sum += a;
        }
        sum -= mx;
        sum -= mn;
        double ans = sum / double(n - 2);
        std::printf("%.2f\n", ans);
    }
    return 0;
}