#include <iostream>

auto main() -> int {
    int a = 0;
    int b = 1;
    a = b++ + a + a++;
    printf("%d, %d", a, b);
    return 0;
}