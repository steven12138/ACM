#include <iostream>
#include <algorithm>

using namespace std;

void solve();

int main() {
    ios::sync_with_stdio(false);
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}

struct node {
    int x, y;

    node() = default;

    node(int x, int y) : x(x), y(y) {}

    bool operator<(const node &r) const {
        if (x != r.x) return y < r.y;
        return x < r.x;
    }

    bool operator==(const node &r) const {
        return x == r.x && y == r.y;
    }
};


node a[4];

void solve() {

    int n;
    cin >> n;
    for (int i = 1; i <= 3; i++) {
        cin >> a[i].x >> a[i].y;
    }
    node pos = {};
    cin >> pos.x >> pos.y;
    sort(a + 1, a + 3 + 1);
    //l
    if (a[1] == (node) {1, 1} && a[2] == (node) {1, 2} && a[3] == (node) {2, 1}) {
        if (pos.x == 1 || pos.y == 1) {
            cout << "YES" << endl;
        } else cout << "NO" << endl;
        return;
    }
    if (a[1] == (node) {1, n - 1} && a[2] == (node) {1, n} && a[3] == (node) {2, n}) {
        if (pos.x == 1 || pos.y == n) {
            cout << "YES" << endl;
        } else cout << "NO" << endl;
        return;
    }
    if (a[1] == (node) {n - 1, 1} && a[2] == (node) {n, 1} && a[3] == (node) {n, 2}) {
        if (pos.x == n || pos.y == 1) {
            cout << "YES" << endl;
        } else cout << "NO" << endl;
        return;
    }
    if (a[1] == (node) {n - 1, n} && a[2] == (node) {n, n - 1} && a[3] == (node) {n, n}) {
        if (pos.x == n || pos.y == 1) {
            cout << "YES" << endl;
        } else cout << "NO" << endl;
        return;
    }
    for (int i = 1; i <= 3; i++) {
        a[i].x %= 2;
        if (a[i].x == 0) a[i].x = 2;
        a[i].y %= 2;
        if (a[i].y == 0) a[i].y = 2;
    }
    pos.x %= 2;
    if (pos.x == 0) pos.x = 2;
    pos.y %= 2;
    if (pos.y == 0) pos.y = 2;
    for (int i = 1; i <= 3; i++) {
        if (pos == a[i]) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}