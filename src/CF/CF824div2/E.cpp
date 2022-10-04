#include <iostream>
#include <set>

#define int long long

using namespace std;

void solve();

auto main() -> int32_t {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}

#define MAXN 1005

int a[MAXN];
int b[MAXN];


int n;
set<int> st;

bool check_dis(int x) {
    for (int i = 1; i <= n; i++) {
        if (st.find(a[i] + x) != st.end()) {

        }
    }
}

auto solve() -> void {
    st.clear();
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
        st.insert(b[i]);
    }

}