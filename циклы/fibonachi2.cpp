#include<iostream>
using namespace std;

void fib(int n)
{
    int sum = 0;
    int s = 0;
    int buffer = 1;
    int buffer2 = 0;
    for(int i = 0; i < n; i++) {
        cout << buffer2 << " ";
        sum += buffer2;
        s = buffer2 + buffer;
        buffer2 = buffer;
        buffer = s;
    }
    cout << "\nСумма: " << sum << endl;
}

int main() {
    fib(4);
    return 0;
}
//11235