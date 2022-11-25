#include <iostream>
#include <cmath>

#define P(X) ((X)*(X))

int dis(int x1, int y1, int x2, int y2) {
    double distance = std::sqrt(P(x1 - x2) + P(y1 - y2));
    return std::floor(distance);
}

auto main() -> int32_t {
    int n;
    std::cin >> n;
    int x = 0, y = 0;
    int attack = 30;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (i > 3) attack = 40;
        if (i > 8) attack = 55;
        std::string name;
        int blood;
        int ix, iy;
        std::cin >> name >> blood >> ix >> iy;
        int move = dis(x, y, ix, iy);
        int at = blood / attack + (blood % attack != 0);
        ans += move + at;
        x = ix;
        y = iy;
    }
    std::cout << ans << std::endl;
    return 0;
}