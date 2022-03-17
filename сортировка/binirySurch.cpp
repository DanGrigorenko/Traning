#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void f(vector<int>& vec) {
    sort(vec.begin(), vec.end());
}
int main() {
    vector<int> lst = {2,3,0,5,7,9,1,8,6};
    
    f(lst);
    for (auto item : lst) {
        cout << item << " ";
    }
    
    int l = 0;
    int r = lst.size(); 
    int mid;
    int key = 0;
    cout << "\nВведите искомое значение: ";
    cin >> key;
    
    while (l < r) {
        mid = (l + r) / 2; 
    
        if (lst.at(mid) > key) r = mid;
        else l = mid + 1;
    }
    
    r--; 
    
    if (lst.at(r) == key) cout << "Индекс элемента " << key << " в массиве равен: " << r << endl; 
    else cout << "Извините, но такого элемента в массиве нет" << endl;
}

 