#include <iostream>
using namespace std;
int main() {
    const int max = 80;
    char str[max];
    
    cout << "Введите строку: ";
    cin.get(str, max);
    cout << "Вы ввели: " << str << endl;
    return 0;
}