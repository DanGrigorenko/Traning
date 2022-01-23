#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, x, f, y;
    int d;

    cout << "Введите x" << endl;
    cin >> x;
    cout << "Введите y" << endl;
    cin >> y;
    cout << "Меню:\n1)Расчитать x^2\n2)рачитать экспоненту exp(x)\n Выбирете пункт меню: ";
    cin >> (d);
    switch(d)
    {
    case 1:
    {
        f = pow(x, 2);
        break;
    }   
    case 2:
    {
        f = exp(x);
        break;
    } 
    default:
    {
        cout << "такого варианата нет.\n";
        return 0;
    }
    }    
    cout << "x= " << x << endl;
    cout << "y= " << y << endl;
    cout << "f(x) = " << f << endl;
    
    if (x*y > 0)
    {
        cout << "Выполнятся первая ветка" << endl;
        a = 1 + pow((f + y), 2);
    }
    else if (x*y < 0)
    {
        cout << "Выполнятся вторая ветка" << endl;
        a = f - sqrt(fabs(f*y));
    }
    else if (x*y == 0)
    {
        cout << "Выполнятся третья ветка" << endl;
        a = f + pow(y, 2);
    }

    cout << "a= " << a << endl;
    
    return 0; 
}       

