#include <iostream>
#include<cmath>

using namespace std;
int main() 
{
    double x, y, z, w;

    cout << "Введите x" << endl;
    cin >> x;//182.5
    cout << "Введите y" << endl;
    cin >> y;//18.225
    cout << "Введите z" << endl;
    cin >> z;//0.03298
    
    w = fabs(pow(x, y/x) - pow((y/x), 1.0/3.0)) + (y - x) * (cos(y) - (z)/(y-x))/ (1+(pow(y-x, 2)));
    cout << "Ответ: " << w << endl;
return 0;
}