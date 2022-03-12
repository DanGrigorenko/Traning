#include<iostream>
#include<string.h>
using namespace std;

void Sum(int a, int b) {
    cout << a << " " << b;
} 

int main() {
    void (*pSum)(int,int) = Sum;

    (*pSum)(3,3);

    return 0;
}