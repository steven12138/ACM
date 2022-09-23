#include <iostream>

using namespace std;

auto main(int argc, char *argv[]) -> int {
    cout << argc << endl;
    for (int i = 1; i < argc; i++) {
        cout << argv[i] << endl;
    }
    return 0;
}