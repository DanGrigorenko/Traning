#include <iostream>
#include<cmath>
using namespace std;

bool event(int a)
{
    if (a%2== 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int a,d;
    cout << "Ведите a" << endl;
    cin >> a;
    d = event(a);
    cout <<"Ответ: " << d << endl;
    return 0;
}
