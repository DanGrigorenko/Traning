#include<iostream>
#include <ctime>

using namespace std;

void sort(int* arr, int n) {\
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
} 

int main() {
    srand(time(NULL));
    int n = 10;
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % (20+1);
        cout << arr[i] << " ";
    }

    sort(arr, n);
    cout << endl;
	for (int i = 0; i < n; i++) {
        
        cout << arr[i] << " ";
    }

    int start = 0;
    int count = 1;
    cout << endl;
    for (int i = start; i < n; i++) {
        if (arr[i] == arr[i+1]) {
            count++;
        }
        else {
            cout << arr[i] << " " << count << endl;
            count = 1;
        }  
    }
    return 0;
}