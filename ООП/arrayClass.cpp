#include <iostream>
#include <time.h>
using namespace std;

class Array {
    int n;
    int* arr;
public:

    Array (int n) {
        this->n = n;
        this->arr = new int[n];
    }

    void Create() {
        for (int i = 0; i < n; i++) {
            arr[i] = -10 + rand() % (10 - (-10) + 1);
        }
    }

    void Print() {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int Sum() {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        return sum;
    }

    ~Array () {
        cout << "удалён" << endl;
        delete[] arr;
    }
};

int main() {
    Array a(5);
    a.Create();
    a.Print();
    cout << a.Sum() << endl;
    
    return 0;
}