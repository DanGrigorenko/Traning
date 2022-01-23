#include <iostream>
#include <ctime>
#include <unistd.h>
using namespace std;

int main() {
    srand(time(NULL));
    int n = 10;
    int arr[n];


    for (int i = 0; i < n; i++) {
        arr[i] = 1 + rand() % (10 - 1 + 1);
        cout << arr[i] << " ";
    }

    cout << endl;

    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
            
        }
        arr[j + 1] = key;

        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    cout << endl;

   
   

   
    return 0;
}