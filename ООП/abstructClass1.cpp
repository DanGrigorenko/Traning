#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    double sred;
    bool outsider;
public:
    Person () {}

    virtual void GetName() = 0;
    virtual double Sred() = 0;
    virtual bool Outsider() = 0;

    ~Person() {}
};

class Student : public Person {
private:
    double arr[10];
public:
    Student () {}

    Student (string name) {
        this->name = name;
    }

    void GetName() override {
        cout << name << endl;
    }

    void setPoint() {
        cout << "Введите 10 оценок: " << endl;
        for (int i = 0; i < 10; i++) {
            cin >> arr[i];
        }
    }

    double Sred() override {
        int sum = 0;
        for (int i = 0; i < 10; i++) {
            sum += arr[i];
        }
        sred = sum/10.0;
        return sred;
    }

    bool Outsider() override {
        if (sred >= 7) {
            return true;
        }
        else {
            return false;
        }
    }

    ~Student() {}
};

int main() {
    Student st ("Вася");
    st.setPoint();
    st.GetName();
    cout << "Cредний бал: " << st.Sred() << endl;

    if (st.Outsider() == true) {
        cout << "Повышенная степуха брат!" << endl;
    }
    else {
        cout << "Иди учи далбаёб!" << endl;
    }

    return 0;
}