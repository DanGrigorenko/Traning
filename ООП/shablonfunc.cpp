#include <iostream>
#include <time.h>
using namespace std;

template <typename T1, typename T2>//<class T1, class T2>
T1 Sum(T1 a, T2 b) {
    return a + b;
}

int main() 
{
    cout << Sum(5, 10.3);
    return 0;
}