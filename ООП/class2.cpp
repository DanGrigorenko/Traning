#include<iostream>
#include<string.h>

using namespace std;

class Human {
public: 
    Human() {};

    Human(string name, string surname, int age) {
        this->name = name;
        this->surname = surname;
        this->age = age;
    }
    
    void show() {
        cout << this->name << " " << this->surname << " " << this->age;
    }
    ~Human() {
        cout << "Delete" << endl;
    }
protected:
    string name;
    int age;
    string surname;
};

class Employee : public Human {
public:
    Employee() {};

    Employee(int zp, string name, string surname, int age) : Human(name, surname, age) {
        this->zp = zp;
    }

    void show2() {
        cout << this->zp << " ";
    }

    ~Employee() {
        cout << "Delete" << endl;
    }
protected:
    int zp;
};

int main() {
    Employee w(200, "danik", "zalupa", 13);
    w.show();
    w.show2();
    return 0;
}