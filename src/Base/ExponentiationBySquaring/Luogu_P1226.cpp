#include <iostream>
#include <bitset>

#define int long long

using namespace std;

auto fast_pow(int a, int b, int p) -> int {
    int ans = 1;
    while (b) {
//        cout << std::bitset<8>(a) << endl;
        if (b & 1) {
            ans *= a;
        }
        a *= a;
        b >>= 1;
        ans %= p;
        a %= p;
    }
    return ans;
}

auto main() -> int32_t {
    int a, b, p;
    cin >> a >> b >> p;
    printf("%lld^%lld mod %lld=%lld", a, b, p, fast_pow(a, b, p));
    return 0;
}