#include <iostream>


int N[4][7] = {{0, 2, 6, 3, 4, 1, 5},
               {0, 5, 1, 3, 4, 6, 2},
               {0, 4, 2, 1, 6, 5, 3},
               {0, 3, 2, 6, 1, 5, 4}};

class UnexpectedException : std::exception {
};

int ttn(char t) {
    if (t == 'N') return 0;
    if (t == 'S') return 1;
    if (t == 'W') return 2;
    if (t == 'E') return 3;
    throw UnexpectedException{};
}


int main() {
    int a[7];
    int b[7];
    for (int i = 1; i <= 6; i++) std::cin >> a[i];
    std::string ops;
    std::cin >> ops;
    for (const auto &op: ops) {
        for (int i = 1; i <= 6; i++) {
            b[N[ttn(op)][i]] = a[i];
        }
        for (int i = 1; i <= 6; i++) {
            a[i] = b[i];
        }
    }
    std::cout << a[1] << std::endl;
    return 0;
}