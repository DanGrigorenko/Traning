#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    int num, a, b, c, d, rez;//1234

    cout << "Введите число" << endl;
    cin >> num;

    a = num/1000;//1
    b = num%10;//4
    c = (num/10)%10;//3
    d = (num/100)%10;//2
    
    rez = (a * 1000) + (b * 100) + (c * 10) + d;
    cout << "Ответ: " <<  rez << endl;
    
    return 0;
}