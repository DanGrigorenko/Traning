#include <iostream>
using namespace std;

template <typename T, typename T2>
void sum(T a, T2 b) {   
    cout <<  a << " " << b << endl;
}

int main() {
    sum(12, "еблан");
    return 0;
}