#include <iostream>
#include <cmath>

using namespace std;



int main() 
{
    const int N = 9;
    int mas[N];
    for (int i = 0; i < N; i++)
    {
        cout << "Введите значение элемента  mas["<<i<<"];";
        cin >> mas[i];
    }  
    double max = mas[0];
    for(int i = 1;i < N; i++)
    {
        if(mas[i] > max)
        {
            max = mas[i];
        }
    }
    cout << max << endl;
    return 0;
}