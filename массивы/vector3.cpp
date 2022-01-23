#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> arr {0};

    int buffer = 0;
    int max = arr[0];
    int min = arr[0];
    
    do {
        cin >> buffer;
        if(buffer > max) {
            max = buffer;
        }

        if(buffer < min) {
            min = buffer;
        }

        if(buffer > 0 || buffer < 0) {
            arr.push_back(buffer);
        }
    } while(buffer != 0);

    cout << "Элементы массива: ";
    for(int num : arr) {
        cout << num << " ";
    } 

    cout << endl;
    cout << "Максимальный элемент: " << max << endl;
    cout << "Минимальный элемент: " << min << endl;

    return 0;
}