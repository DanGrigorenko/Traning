#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 3> arr {1,2,3};
    array<int, 3>arr2 {3,2,1};
    bool f = arr == arr2;
    cout << f << endl;
    return 0;
}