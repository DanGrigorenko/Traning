#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main() {
    vector<int> arr;

    int buffer = 0;

    do {
        cin >> buffer;
        if(buffer > 0 || buffer < 0) {
            arr.push_back(buffer);
        }
    } while (buffer != 0);

    cout << "Массив: ";
    for(int num : arr) {
        cout << num << "  ";
    }
    return 0;
}