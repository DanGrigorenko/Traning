#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;
int main() {
    const int n0 = 100;
    string path = "Grigorenko.txt";

    ofstream fout;

    fout.open(path, ofstream::app);

    if(!fout.is_open()) {
        cout << "Ошибка открытия файла." << endl;
    }
    else {
        int n = 0;
        cout << "Введите размерность массива: ";
        cin >> n;

        while (n < 0) {
            cout << "Введите размерность массива: ";
            cin >> n;
        }

        double* arr = new double[n];

        if(arr == NULL) {
            cout << "Нет памяти.";
            return 0;
        }

        for(int i = 0; i < n; i++) {
            arr[i] = (rand() % 10)/7.7;
            fout << arr[i] << " | ";
        }        
    }

    fout.close();
    return 0;
}