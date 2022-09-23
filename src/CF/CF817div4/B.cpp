//817
#include <iostream>

using namespace std;

void replace(string &s, char c) {
    for (char &i: s) {
        if (i == c) i = '_';
    }
}

auto main() -> int {
    int n;
    cin >> n;
    while (n--) {
        int a;
        cin >> a;
        string s1, s2;
        cin >> s1 >> s2;
        replace(s1, 'G');
        replace(s1, 'B');
        replace(s2, 'G');
        replace(s2, 'B');
        cout << (s1 == s2 ? "YES" : "NO") << endl;
    }
    return 0;
}