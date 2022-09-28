#include <iostream>
using namespace std;

template <typename T>
class Printer {
public:
    void print(T value) {
        cout << value << endl;
    }   
};

template <>
class Printer<string> {
public:
    void print(string value) {
        cout << "_____" << value << "_____" << endl;
    }   
};


template <>
class Printer<int> {
public:
    void print(int value) {
        cout << "!!!!!!!!" << value << "!!!!!!!!!" << endl;
    }   
};

