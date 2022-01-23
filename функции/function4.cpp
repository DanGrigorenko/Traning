#include<iostream>
#include<string.h>

using namespace std;

void print(string word, int num = 0) {
    cout << word << num << endl;
}

void sum(int n1, int n2) {
    int res = n1 + n2;
    print("Результат: ", res);
}

int main() {

    sum(5, 3);
    sum(10, 4);
    
    return 0;
}

