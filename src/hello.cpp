#include <iostream>

using namespace std;

#define int long long

auto gcd(int a, int b) -> int {
    if (b == 0) return a;
    gcd(b, a % b);
}


auto main() -> int32_t {
    int a, b;
    while (cin >> a >> b, a != 0 && b != 0) {
        cout << gcd(a, b) << endl;
    }
    return 0;
}