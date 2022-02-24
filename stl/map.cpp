#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, string> myMap;
    myMap.insert(make_pair(1,"c++"));
    myMap.emplace(2, "java");

    cout << myMap[1];
    return 0;
}