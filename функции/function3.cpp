#include <iostream>
#include<cmath>

using namespace std;
int main() 
{       
    double x, y, z, a;
    
    cout << "Введите x" << endl;
    cin >> x;
    cout << "Введите y" << endl;
    cin >> y;
    cout << "Введите z" << endl;
    cin >> z;
    

    a = log(pow(y, -sqrt(fabs(x)))) * (x - y/2) + pow(sin(atan(z)), 2);
    cout << "Ответ" << a << endl;
return 0;
}