#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double r, P, S;
    const double pi = 3.14;

    cin >> r;
    P = 2*pi*r;
    S = pi * pow(r,2);
    cout << P << endl;
    cout << S << endl;

    return 0;
}