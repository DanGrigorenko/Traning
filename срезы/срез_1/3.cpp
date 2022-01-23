#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    cout << ((A > 0 & A % 2 != 0) & (B > 0 & B % 2 != 0) ? true : false);

    return 0;
}