//
// Created by StevenKerman on 2022/9/21.
//
#include <iostream>
#include <queue>
#include <sstream>

#define INDEX(X) (X-'a'+1)
#define CAST(X, Y) (abs( INDEX(X) - INDEX(Y) ))

using namespace std;


struct node1 {
    int i, v;

    node1() = default;

    node1(int i, int v) : i(i), v(v) {}

    bool operator<(const node1 &rhs) const {
        return v > rhs.v;
    }
};

struct node2 {
    int i, v;

    node2() = default;

    node2(int i, int v) : i(i), v(v) {}

    bool operator<(const node2 &rhs) const {
        return v < rhs.v;
    }
};

auto main() -> int {
    int T;
    cin >> T;
    while (T--) {
        priority_queue<node1> sq;
        priority_queue<node2> bq;
        string s;
        cin >> s;
        int n = s.length();
        int min_cost = CAST(s[0], s[n - 1]);
        for (int i = 1; i < n - 1; i++) {
            sq.push({i + 1, INDEX(s[i])});
            bq.push({i + 1, INDEX(s[i])});
        }

        stringstream sstream;
        int step = 1;
        sstream << 1;
        if (INDEX(s[0]) < INDEX(s[n - 1])) {
            while (!sq.empty()) {
                if (sq.top().v <= INDEX(s[n - 1]) && sq.top().v >= INDEX(s[0])) {
                    sstream << " " << sq.top().i;
                    step++;
                }
                sq.pop();
            }
        } else {
//            print(bq);
            while (!bq.empty()) {
                if (bq.top().v >= INDEX(s[n - 1]) && bq.top().v <= INDEX(s[0])) {
                    sstream << " " << bq.top().i;
                    step++;
                }
                bq.pop();
            }
        }
        step++;
        sstream << " " << n << endl;
        cout << min_cost << " " << step << endl;
        cout << sstream.str();
    }
    return 0;
}