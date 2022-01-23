#include <iostream>
#include<cmath>

using namespace std;
int main() 
{
    const int n = 15;
    int mas[n];
    int a = 0, b = 0; 
    int res = 1;
    for(int i = 0; i < n; i++)
    {
        cout << "Введите mas["<<i<<"]: ";
        cin >> mas[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(mas[i] < 0)
        {
            a += 1;
        }
        if(mas[i] > 0)
        {
            res = res * mas[i];
        }
        if (mas[i] == 0)
        {
            b += 1;
        }
    }
    cout << a << "  " << res << "  " << b;
    
    

   
    return 0;
}
