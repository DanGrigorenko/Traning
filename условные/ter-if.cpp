#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    int A, B;
    cout << "Введите положительное целое число" << endl;
    cin >> A;
    cout << "Введите положительное целое число" << endl;
    cin >> B;
    
    A%2==0 || B%2==0 ? cout << "Одно из чисел чётное": cout << "Ни одно из чисел нечётное";
    
    return 0;
}