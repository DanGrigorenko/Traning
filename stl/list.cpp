#include <iostream>
#include <list>
using namespace std;
int main() {
    list<int> lis = {1,1,1,2,4, 1};
    lis.push_back(3);
    lis.push_back(5);
    lis.unique();//удаляет подряд идущие повторяющиеся элементы
    
    //lis.pop_back();
    //cout << lis.size() << endl;

    /*
    auto it2 = lis.begin();
    advance(it2,5);
    lis.insert(it2, 234);
    lis.erase(it2);
    */

   //lis.assign(10,134);

    list<int>::iterator it = lis.begin();
    for (list<int>::iterator i = lis.begin(); i != lis.end(); i++) {
        cout << *i << " ";
    }
    return 0;
}