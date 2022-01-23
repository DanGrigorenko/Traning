#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int num, a, b, c, d, res;//1234
    cin >> num;
    a = num/1000;//1
    b = num%10;//4
    c = (num/10)%10;//3
    d = (num/100)%10;
    res = a*1000 + b*100 + c*10 + d;
    cout << "Ответ" << res << endl;
    

    return 0;
}