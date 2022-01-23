#include<iostream>
using namespace std;

int main() {
    int a, b, c, d, x;

    cout << "Введите промежуток: \n";
    cin >> a >> b;
    cout << "Введите цифры: \n";
    cin >> c >> d;

    for (int i = a; i <= b; i++) {
        cout << i * c << "\t" << i * d << endl;
    }
    
    return 0;
}