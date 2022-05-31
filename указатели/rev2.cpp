#include <iostream>
#include  <cmath>
using namespace std; 

void foo(double &x2, double &sqrtx, double *x3) {
    x2 = pow(x2, 2);
    sqrtx = sqrt(sqrtx);
    *x3 = pow(*x3, 3);
}

int main() {
    double x2 = 2;
    double sqrtx = 4;
    double x3 = 3;

    cout << "x2 = " << x2 << endl;
    cout << "sqrtx = " << sqrtx << endl;
    cout << "x3 = " << x3 << endl;
    cout << endl;
    
    foo(x2, sqrtx, &x3);

    cout << "x2 = " << x2 << endl;
    cout << "sqrtx = " << sqrtx << endl;
    cout << "x3 = " << x3 << endl;
    return 0;
}