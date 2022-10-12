#include <iostream>
#include <initializer_list>


void foo(std::initializer_list<int> t) {
    for (const auto &item: t) {
        std::cout << item << std::endl;
    }
}

auto main() -> int {z
    foo({1, 2, 3, 4, 4});
    return 0;
}