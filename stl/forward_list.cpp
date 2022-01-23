#include <iostream>
#include <forward_list>

using namespace std;
int main() {
    forward_list<int> f1 = {1,2,3,4};
    f1.push_front(9);

    forward_list<int>::iterator it = f1.before_begin();
    
    f1.insert_after(it,99);

    for (auto i = f1.begin(); i != f1.end(); i++) {
        cout << *i << " ";
    }
}