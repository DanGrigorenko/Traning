#include<iostream>

void print(int **arr, int a, int b);

using namespace std;
int main() {
    
    int** arr = new int*[5];

    for(int i = 0 ; i < 5; i++) {
        arr[i] = new int[3];
    }

    print(arr, 5, 3);

    delete [] arr;
    arr = NULL;
    
    return 0;
}

void print(int **arr, int a, int b) {
    for (int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++)
        {
            arr[i][j] = rand() % 10;
            cout << arr[i][j] << " | ";
        }    
        cout << endl;
    }
}