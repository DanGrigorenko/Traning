#include <iostream>
#include<cmath>

using namespace std;
int main() 
{       
    int a, b;
    cout << "С какого числа начать" << endl;
    cin >> a;
    cout << "Rfrbv xbckjv pfrjyxbnm" << endl;
    cin >> b;
    if (a > b)
    {
        int c = a;
        a = b;
        b = c;
    }

    for (int i = a; i <= b; i++)
    {
        if (i < 0)
        {
            cout << "нельзя извлечь корень из отрицательного числа\n";
            continue;
        }
        cout << i << "\t" << sqrt(i) << endl;
    }
return 0;
}
