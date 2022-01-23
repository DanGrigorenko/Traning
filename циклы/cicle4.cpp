#include<iostream>
using namespace std;
int main() {
    int a, b;
    double sr;
    int count = 0;

    cout << "Ввод: \n";
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (i % 3 == 0) {
            count++;
            sr += i;
        }
    }
    cout << "Result: " << sr / count << endl;
    return 0;
}