#include <iostream>
#include<cmath>

using namespace std;
int main() 
{       
    int K, A;
    cin >> A;
    cout << "Меню:\n1.Перевести в килограммы\n2.Перевести в граммы\n3.Перевести в центнеры\n4.Перевести в тонны\n";
    cin >> K;
    switch(K)
    {
        case 1:
        {
            cout << "Килограммы ";
            A = A / 1000000;
            cout << A << endl;
            break;
        }
        case 2:
        {
            cout << "Граммы ";
            A = A / 1000;
            cout << A << endl;
            break;
        }
        case 3:
        {
            cout << "Центнеры ";
            A = A / 100000000;
            cout << A << endl;
            break;
        }
        case 4:
        {
            cout << "Тонны ";
            A = A / 1000000000;
            cout << A << endl;
            break;
        }
        default:
        {
            cout << "Ты даун" << endl;
        }
    }
return 0;
}