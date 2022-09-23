//这玩意真的没想到，离谱

#include <iostream>

using namespace std;

auto main() -> int {
    for (int i = 1; i <= 25; i++) {
        cout << "? 1 " << i + 1 << endl;
        int64_t l1, l2;
        cin >> l1;
        if (l1 == -1) {
            cout << "! " << i << endl;
            return 0;
        }
        cout << "? " << i + 1 << " " << 1 << endl;
        cin >> l2;
        if (l1 != l2) {
            cout << "! " << l1 + l2 << endl;
            return 0;
        }
    }
    return 0;
}