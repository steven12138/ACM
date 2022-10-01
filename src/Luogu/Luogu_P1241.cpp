#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> s1;
    for (const auto &c: s) {
        if (c == '(') s1.push('(');
        if (c == '[') s1.push('[');
        if (c == ')') {
            if (!s1.empty() && s1.top() == '(') s1.pop();
            else cout << "(";
        }
        if (c == ']') {
            if (!s1.empty() && s1.top() == '[') s1.pop();
            else cout << "[";
        }
        cout << c;
    }
    while (!s1.empty()) {
        if (s1.top() == '(') cout << ")";
        else cout << "]";
        s1.pop();
    }
    cout << endl;
    return 0;
}