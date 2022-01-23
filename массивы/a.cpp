#include <iostream>
#include <time.h>
using namespace std;

void Print(const int* const arr, const int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void pushBack(int *&arr, int &size, int value) {
    int *newArray = new int[size+1];

    for (int i = 0; i < size; i++) {
        newArray[i] = arr[i];
    }

    newArray[size] = value;
    size++;
    delete[] arr;
    arr = newArray;
}

int main() {
    srand(time(NULL));

    int size = 5;
    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 11;
    }

    Print(arr,size);
    pushBack(arr,size,111);
    cout << endl;
    Print(arr,size);
    return 0;   
}