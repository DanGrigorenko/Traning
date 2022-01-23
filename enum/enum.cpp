#include<iostream>
#include<string.h>

using namespace std;

enum Cars {
    BMW = 1,
    AUDI,
    MERSEDES
};

struct User {
    int age;
    string name;
    string surname;
    string email; 
    Cars user_car; 
    int input_car;

    void setAll() {
        cout << "Введите имя: ";
        cin >> name;

        cout << "Введите фамилию: ";
        cin >> surname;

        cout << "Введите возраст: ";
        cin >> age;

        cout << "Введите EMAIL: ";
        cin >> email;
        
        cout << "Введите номер марки машины из предложенного:\n1)BMW\n2)AUDI\n3)MERSEDES\n";
        cout << "Ввод: ";
        cin >> input_car;
    }

    void print() {
        cout << "Имя: " << name << "\nФамилия: " << surname << "\nВозраст: " << age << "\nEMAIL: " << email << endl; 
    }
};   

int main() {
    User admin;

    admin.setAll();
    admin.print();  

    switch (admin.input_car) {
        case Cars::BMW: {
            cout << "Машина: BMW" << endl;
            break;
        }

        case Cars::AUDI: {
            cout << "Машина: AUDI" << endl;
            break;
        }

        case Cars::MERSEDES: {
            cout << "Машина: MERSEDES" << endl;
            break;
        }
        default: {
            cout << "Нет такой машины в списке!!!" << endl;
        }
    }

    return 0;
}