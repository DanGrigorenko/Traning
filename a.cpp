
#include <iostream>
#include <string>
#include <unistd.h>
#include <iomanip>
#include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    int n = 0;
    cout << "Введите n: ";
    cin >> n;
    int first = 0, next = 1, s = 0;
    for (int i = 0; i < n; i++) {
        cout << first << " ";
        s = first + next;
        first = next;
        next = s;
    }

    cout << endl;
    double** arr = new double*[n,n];
    if (arr == NULL) {
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = new double [n];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = (-10 + rand() % (10+10+1))/3.3;
            cout << setw(10) << setprecision(5) << arr[i][j] << " | ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
       delete [] arr[i];
    }
    delete[] arr;
    return 0;
}