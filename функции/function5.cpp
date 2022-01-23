#include <iostream>

using namespace std;

void foo(char='*', int=45);
int main() {
    foo('+', 76);
    return 0;
}

void foo(char ch, int n) {
    cout << ch << " " << n << endl;
}