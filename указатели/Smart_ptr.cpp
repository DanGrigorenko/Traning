#include <iostream>
#include <memory>
using namespace std;

template <typename T>
class SmartPointer {
public:
    SmartPointer(T* ptr) {
        this->ptr = ptr;
    }

    ~SmartPointer() {
        delete ptr;
    }

    T& operator* () {
        return *ptr;
    }

private:
    T* ptr;
};



int main() {
    /*
    unique_ptr<int> ap1(new int(5));
    unique_ptr<int> ap2;
    ap2 = move(ap1);
    int *p = ap2.get();
    cout << *p;
    */

    /*
    auto_ptr<int> ap1(new int(5));
    auto_ptr<int> ap2(ap1);
    */

    /*
    shared_ptr<int> ap1(new int(5));
    shared_ptr<int> ap2(ap1);
    int *p = ap2.get();
    cout << *p;
    */

    SmartPointer<int> p = (new int(10));
    


    return 0;
}