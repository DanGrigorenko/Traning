#include <iostream>
#include<cmath>

using namespace std;
int main() 
{
    int a;
    cout <<"Введите a" << endl;
    cin >> a;
    if (a % 7 == 0)
    {
        cout << "Число " << a << " относится группе А" << endl;
    }
    else if (a < 100 & a > 0)
    {
        cout << "Число " << a << " относится группе B" << endl;
    }
    else if  (a > 100)
    {
        cout << "Число " << a << " относится группе C" << endl;
    }
    else
    {
        cout << "Число " << a << " относится группе D" << endl;

    }
    

return 0;
}
