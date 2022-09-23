#include <iostream>

using namespace std;

auto main() -> int {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        int t1 = abs(a - 1);
        int t2 = abs(b - c) + abs(c - 1);
//        cout << "debug: " << t1 << " " << t2 << endl;
        cout << (t1 < t2 ? 1 : (t1 > t2 ? 2 : 3)) << endl;
    }
    return 0;
}