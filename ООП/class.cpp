#include<iostream>
#include<string.h>

using namespace std;

class Student {   
private:    
    int age;
    string name;
    string surname;
    string phone;
    char group;
public: 
    Student() {
        cout << "ОбЪект был создан." << endl;
    }

    Student(int age, char group, string name, string surname, string phone) {
        this->age = age > 5 ? age : 5;
        this->group = group;
        this->name = name;
        this->surname = surname;
        this->phone = phone;
    }

    void ser(int age, string name, string surname) {
        this->age = age;
        this->name = name;
        this->surname = surname;
    }    

    void print() {
        cout << this->age << "  " <<  this->name << "  " << this->surname << "  " << this->group << "  " << this->phone << endl;
    }

    ~Student() {
        cout << "ОбЪект был удалён" << endl;
    }
};

int main() {
    Student bob(13, 'C', "Иван", "Никитин", "+375(29)170-69-54");
    //bob.ser(2, "xer", "pizda");
    bob.print();

    return 0;
}