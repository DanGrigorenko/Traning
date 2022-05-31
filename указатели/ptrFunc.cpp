#include <iostream>
#include <cmath>

using namespace std;
 
void operation(double(*)(double), double);
 
int main()
{
    double a = 10;
    operation(sqrt, a);
 
    return 0;
}
 
void operation(double(*op)(double), double a)
{
    cout << "Введите:" << endl;
    cin >> a;
    cout << op(a) << endl;
}