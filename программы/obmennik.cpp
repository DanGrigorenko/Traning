#include<iostream>
using namespace std;

int main() {
    int d; 
    double sterling = 1.487;
    double frank = 0.172;
    double nemec = 0.584;
    double japan = 0.00955;

    cout << "Введите сумму: ";
    cin >> d; 

    sterling = d/sterling;
    frank = d/frank;
    nemec = d/nemec;
    japan = d/japan;

    cout << "Стерлинг: " << sterling << endl;
    cout << "Франк: " << frank << endl;
    cout << "Немецкая валюта: " << nemec << endl;
    cout << "Японская валюта(йену): " << japan << endl;

    return 0;
}