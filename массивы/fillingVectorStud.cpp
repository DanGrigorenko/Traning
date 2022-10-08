#include<iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
    vector<string> students;

    string buffer = "";

    cout << "Вводите фамилии студентов. " << endl;
    cout << "По окончание ввода введите пустую строку" << endl;

    do {
        getline(cin, buffer);
        if (buffer.size() > 0) {
            students.push_back(buffer);
        }
    } while (buffer != "");

    cout << "Учащиеся." << endl;
    for(string name : students) {
        cout << name << endl;
    }

    return 0;
}