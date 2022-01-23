#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream f;
    f.exceptions(ifstream::badbit | ifstream::failbit);
    try
    {
        f.open("gre.txt", ios::in);
    }
    catch(const ifstream::failure& e)
    {
        cout << e.what() << endl;
        cout << e.code() << endl;
        cout << "Ошибка" << endl;
    }
    
    return 0;
}