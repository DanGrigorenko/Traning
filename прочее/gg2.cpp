#include<iostream>
using namespace std;

void foo(int num) {
    string str_num = to_string(num);

    for(int i = 0; i < str_num.size(); i++) {
        cout << stoi(str_num.substr(i, 1)) << endl;
    }
}

int main() {
    int num;
    cin >> num;
    foo(num);
    return 0;
}