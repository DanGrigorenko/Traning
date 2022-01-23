#include <iostream>
using namespace std;

template <class T>
class XZ {
public:
    XZ () {}

    XZ (T a) {
        this->value = a;
    }

    void print(T value) {
        cout << value << endl;
    }

    ~XZ() {}
private:
    T value;
};

template<>
class XZ<string> {
public:
    void print(string value) {
        cout << "___" << value << "___" << endl;
    }
};

template<>
class XZ<int> {
public:
    void print(int value) {
        cout << "***" << value << "***" << endl;
    }
};


int main() {
    XZ<int> s;
    s.print(34);
    return 0;
}