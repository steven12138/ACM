#include <iostream>
#include <stack>

using namespace std;

int main() {
    int ans = 0;
    stack<int> st;
    int num = 0;
    while (true) {
        char s = static_cast<char>(getchar());
        if (s == '@') break;
        if (s >= '0' && s <= '9') {
            int c = s - '0';
            num *= 10;
            num += c;
        } else if (s == '.') {
            st.push(num);
            num = 0;
        } else {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            if (s == '+') st.push(a + b);
            if (s == '-') st.push(b - a);
            if (s == '*') st.push(a * b);
            if (s == '/') st.push(b / a);
        }
    }
    cout << st.top() << endl;
    return 0;
}