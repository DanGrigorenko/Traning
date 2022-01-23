#include<iostream>
#include<cmath>

using namespace std;

/* int main()
{
    int a,b,c, max;
    cin >> a >> b >> c;
    if(a > b & a > c)
    {
        max = a;
    }
    else if(b > a & b > c)
    {
        max = b;
    }
    else 
    {
         max = c;
    }
    cout << max << endl;
    
} */

/* int main()
{
    int a,b,c, max;
    cin >> a >> b >> c;
    if(a > b & a > c)
    {
        max = a;
        if(b < a & b > c)
        {
            cout << "Ответ = " <<  b + max << endl;
        }
        if(c < a & c > b)
        {
            cout << "Ответ = " << c + max << endl;
        } 
    }

      if(b > a & b > c)
    {
        max = b;
        if(a < b & a > c)
        {
            cout << "Ответ = " <<  a + max << endl;
        }
        if(c < a & c > b)
        {
            cout << "Ответ = " <<  c + max << endl;
        } 
    }

      if(c > a & c > b)
    {
        max = c;
        if(a < c & a > b)
        {
            cout << "Ответ = " <<  a + max << endl;
        }
        if(b < c & b > a)
        {
            cout << "Ответ = " <<  b + max << endl;
        } 
    }
    
    if(a=b=c)
    {
        cout << "Введите разные значения" << endl;
    }
} */

/*int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(a + 1 == b + 1 == C)
    {
        cout << "Ряд чисел: "  << a << b << c << " - образует" << endl;
    }
    else
    {
        cout << "Ряд чисел: "  << a << b << c << " - не образует" << endl; 
    }
    
}

/*int main()
{
    int a,b,c,d = 0;
    cin >> a >> b >> c;
   if(a == b & b == c)
   {
       d = 3;
   }
   else if(a == b | a == c | b == c)
   {
       d = 2;
   }
    cout << d << endl;
}*/

/*int main()
{
    int P;
    cin >> P;
    switch(P)
    {
        case 12:
        case 1:
        case 5:
        {
            cout << "Ты даун" << endl;
            break;
        }
        case 3:
        case 2:
        case 7:
        {
            cout << "Ты чмо" << endl;
            break;
        }
        default:
        {
            cout << "Ебать ты тупой введи норм число" << endl;
            break;
        }
    }
}*/
