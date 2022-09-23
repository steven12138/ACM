#include <iostream>

using namespace std;

auto main() -> int {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << n + n / 2 + n / 2 + n / 3 + n / 3 << endl;
    }
    return 0;
}