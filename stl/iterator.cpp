#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<int> arr = {1,2,3,4,3,2,1};
    vector<int>::iterator it = arr.begin();

    
    //cout << *(it + 3) << endl;
    //advance(it, 4);
    //cout << *it << endl;

   
    //arr.insert(it, 33); //добавляет элемент по указанаму индексу
    //arr.erase(it); //удаляет элемент по указанаму индексу

    
    for (vector<int>::reverse_iterator i = arr.rbegin(); i != arr.rend(); i++) {
        cout << *i << " ";
    }
    
    return 0;
}