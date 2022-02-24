#include <iostream>
#include <string>
#include <list>
#include <sstream>

using namespace std;

bool isVowel(char symbol) {
    const int N = 10;
    char arrVowel[N] = {'A', 'E', 'I', 'O', 'U', 'Y'};
    for(auto item : arrVowel) {
        if (item == symbol)
            return true;
    }
    return false;
}

void ListWords(char arrSym[], list<string>& arrLengthWord) {
    stringstream ss(arrSym);
    string s;

    ss >> s;
    arrLengthWord.push_back(s); 
    int i = 1;
    while (ss >> s) {
        arrLengthWord.push_back(s);
        i++;
    }
}

int main() {
    const int N = 256;
    char S[N] = "Hello, i am string\nHow are you?\n-All OK!";
    list<string> listWord;
    ListWords(S, listWord);
    
    int count = 0;
    int arrLengthWord[listWord.size()];
    int k = 0;
    for (auto item : listWord) {
        count = 0;
        for (int i = 0; i < item.size(); i++) {
            if (isVowel(toupper(item[i]))) {
                count++;
            }
        }
        arrLengthWord[k] = count;
        k++;
    }

    string arrWord[listWord.size()];
    int o = 0;
    for (auto item : listWord) {
        arrWord[o] = item;
        o++;
    }    

    for (int i = 0; i < listWord.size()-1; i++) {
        for (int j = 0; j < listWord.size()-i-1; j++) {
            if (arrLengthWord[j] > arrLengthWord[j+1]) {
                string temp = arrWord[j];
                arrWord[j] = arrWord[j+1];
                arrWord[j+1] = temp;

                int temp2 = arrLengthWord[j];
                arrLengthWord[j] = arrLengthWord[j+1];
                arrLengthWord[j+1] = temp2;
            }
        }
    }

    for (auto item : arrWord) {
        cout << item << " ";
    }
    return 0;
}