#include <iostream>
#include <map>

using namespace std;

void solve();

int main() {
    solve();
}


#define MAXN 1005
#define MAXK 25

int n, k;

int getVal(const int m[]) {
    int sum = 0;
    for (int i = 1; i <= k; i++) {
        sum = sum * 3 + m[i];
    }
    return sum;
}

int a[MAXN][MAXK];

int get_rest(int a1, int a2) {
    int mp[3][3];
    mp[0][0] = 0;
    mp[0][1] = 2;
    mp[0][2] = 1;
    mp[1][0] = 2;
    mp[1][1] = 1;
    mp[1][2] = 0;
    mp[2][0] = 1;
    mp[2][1] = 0;
    mp[2][2] = 2;
    return mp[a1][a2];
}

#define printI(X) for(int _=1;_<=k;_++) cout<<X[i]<<" ";cout<<endl;

void solve() {
    cin >> n >> k;

    map<int, bool> vis;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++)
            cin >> a[i][j];
        int sp = getVal(a[i]);
        vis[sp] = true;
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int cnt = 0;
        for (int j = i; j <= n; j++) {
            if (i == j)     continue;
            int c[20] = {};
            for (int d = 1; d <= k; d++) {
                c[d] = get_rest(a[i][d], a[j][d]);
            }
            cout<<"---"<<endl;
            printI(a[i])
            printI(a[j])
            printI(c)
            cout<<"---"<<endl;
            int sp = getVal(c);
            cnt += vis[sp];
        }
        cnt /= 2;
        ans += cnt * (cnt - 1) / 2;
    }
    cout << ans << endl;
}