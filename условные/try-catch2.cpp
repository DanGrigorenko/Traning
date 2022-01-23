#include <iostream>
#include <fstream>
#include <string>
#include <exception>
using namespace std;

void foo(int val) {
    if (val < 0) {
        throw invalid_argument("ебать ты животное");
    }
    cout << val << endl;
}

int main() {
    try {
        foo(-33);
    }
    catch (invalid_argument& e) {
        cout << "Поймали " << e.what() << endl; 
    }
    catch (...) {
        cout << "defef" << endl;
    }
   
    return 0;
}