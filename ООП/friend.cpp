#include <iostream>
using namespace std;

class Alcahol {
private:
    bool canISell;
public:
  

    Alcahol() {
        this->canISell = false;
    }

    friend class Person;

    ~Alcahol() {}
};

class Person {
private:
    int age;
public:
    Person () {}

    Person (int age) {
        this->age = age;
    }

    void checkPerson(Alcahol &obj, Person &man) {
        if (man.age >= 18) {
            obj.canISell = true;
        }
        else {
            obj.canISell = false;
        }
        cout << obj.canISell << endl;
    }

    ~Person () {}
};

int main() {
    Alcahol viski;
    Person p(23);
    p.checkPerson(viski, p);
    return 0;
}