#include <iostream>
using namespace std;

int main() {
    const int a = 10;
    int arr[a] = {33, 0, 28, -16, -32, 74, 0, -30, 99, 0};
    bool flag = true;
    for(int i = 0; i < a/2; i++) {
        if(arr[i] != arr[a-i-1]) {
            cout << "ne polindrom" << endl;
            flag = false;
            break;
        }
    }
    if(flag == true) {
        cout << "polindrom" << endl;
    }
    return 0;
}