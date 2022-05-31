#include <iostream>
using namespace std;

void show(int &n) {
    int a = 10;
    n += a;
}

void show2(int n) {
    int a = 10;
    n += a;
}

int main() {
    int n = 1;
   
    show2(n);
    cout << n << endl;
  
    return 0;
}