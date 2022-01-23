#include<iostream>
#include<array>

using namespace std;
int main() {
    array<int, 5> arr;
    int buffer = 0;

    for(int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }

    for(int num : arr) {
        cout << num << "  ";
    }
    return 0;
}