#include <iostream>
#include <string>
using namespace std;

bool foo(string ransomNote, string magazine) {
    string newStr = "";
    for (int i = 0; i < ransomNote.size(); i++) {
        for (int j = 0; j < magazine.size(); j++) {
            if (ransomNote[i] == magazine[j]) {
                newStr += magazine[j];
                magazine.erase(j,1);
                break;
            }
        }
    }
   
    if (newStr == ransomNote) 
        return true;
    return false;
}

int main() {
    string ransomNote = "mikeeeeeeeeeeeee";
    string magazine = "eiomfjeiojideknwdjoeeeeeeeeeeee";

    cout << foo(ransomNote, magazine) << endl;
    return 0;
}