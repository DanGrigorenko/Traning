#include <iostream>
using namespace std;

int main() {
    int num = -123;
    string num_str = to_string(num);
    string rs {num_str.rbegin(), num_str.rend()};
    cout << -stol(rs) << endl;
    return 0;
}