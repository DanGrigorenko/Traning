#include <iostream>
#include <vector>
#include <list>
#include <cstring>
#include <algorithm>

using namespace std;
void Count (vector<int>& vec, int count = 0, int i = 0) {
    if (i < vec.size()) {
        Count(vec,count+1, i+1);
    }
    else {
        cout << count << endl;
    }
}

void Max (vector<int>& vec, int max = -1000, int i = 0) {
    if (i < vec.size()) {
        if (vec.at(i) > max) {
            max = vec.at(i);
        }
        Max(vec,max, i+1);
    }
    else {
        cout << max << endl;
    }
}

void Sum (vector<int>& vec, int sum = 0, int i = 0) {
    if (i < vec.size()) {
        sum += vec.at(i);
        Sum(vec,sum, i+1);
    }
    else {
        cout << sum << endl;
    }
}
int main() {
    vector<int> vec {1,3,5,43,5,3, 3,5, 644,4};
    Sum(vec);
    return 0;
}