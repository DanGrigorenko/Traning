#include <iostream>
#include <time.h>
using namespace std;

template <typename T1, typename T2>
class Myclass {
public:
    Myclass(T1 value, T2 value2) {
        this->value = value;
        this->value2 = value2;
    }

    void Foo() {
        cout << sizeof(value) << endl;
        cout << sizeof(value2) << endl;
    }
private:
    T1 value;
    T2 value2;
};

int main() 
{
    Myclass<int, double> p(2.3, 3);
    p.Foo();
    return 0;
   
}