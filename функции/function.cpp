#include <iostream>
#include<cmath>

using namespace std;
int main() 
{
    double z1, z2, a, b;

    cout << "Введите a" << endl;
    cin >> a;
    cout << "Введите b" << endl;
    cin >> b;

    z1 = pow(cos(a) - cos(b), 2) - pow(sin(a) - sin(b), 2);
    z2 = -4 * pow(sin((a-b)/2), 2) * cos(a + b);
    cout << "Число z1: " << z1 << endl;
    cout << "Число z2: " << z2 << endl;

return 0;
}