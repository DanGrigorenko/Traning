#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> mySet;
    mySet.insert(5);
    mySet.insert(1);
    mySet.insert(12);
    mySet.insert(4);
    mySet.insert(-1);

    for (auto &item : mySet) {
        cout << item << " ";
    }
    
    return 0;
}