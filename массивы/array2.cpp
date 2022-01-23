#include <iostream>
#include <cmath>

using namespace std;



int main() 
{
    const int N = 6;
    int mas[N], f=0;
    for (int i = 0; i < N; i++)
    {
        cout << "Введите значение элемента  mas["<<i<<"];";
        cin >> mas[i];
        if (mas[i] > 0)
        {
            f++;
        }
    }  
    cout << f << endl;
    return 0;
}