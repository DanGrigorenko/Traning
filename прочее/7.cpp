#include <iostream>
using namespace std;

class Money {
private:
    int m10, m20, m50, m100, m500, m1000, m10000, m20000, m50000, m100000;
public:
    Money() {}

    Money(int m10, int m20, int m50, int m100, int m500, int m1000, int m10000, int m20000, int m50000, int m100000) {
        this->m10 = m10;
        this->m20 = m20;
        this->m50 = m50;
        this->m100 = m100;
        this->m500 = m500;
        this->m1000 = m1000;
        this->m10000 = m10000;
        this->m20000 = m20000;
        this->m50000 = m50000;
        this->m100000 = m100000;
    }

    Money(const Money& obj) {
        this->m10 = obj.m10;
        this->m20 = obj.m20;
        this->m50 = obj.m50;
        this->m100 = obj.m100;
        this->m500 = obj.m500;
        this->m1000 = obj.m1000;
        this->m10000 = obj.m10000;
        this->m20000 = obj.m20000;
        this->m50000 = obj.m50000;
        this->m100000 = obj.m100000;
    }

    int GetM10() {
        return m10;
    }
    int GetM20() {
        return m20;
    }
    int GetM50() {
        return m50;
    }
    int GetM100() {
        return m100;
    }
    int GetM500() {
        return m500;
    }
    int GetM1000() {
        return m1000;
    }
    int GetM10000() {
        return m10000;
    }
    int GetM20000() {
        return m20000;
    }
    int GetM50000() {
        return m50000;
    }
    int GetM100000() {
        return m100000;
    }

    Money operator-(Money p) {
        this->m10 = this->m10 - p.m10;
        this->m20 = this->m20 - p.m20;
        this->m50 = this->m50 - p.m50;
        this->m100 = this->m100 - p.m100;
        this->m500 = this->m500 - p.m500;
        this->m1000 = this->m1000 - p.m1000;
        this->m10000 = this->m10000 - p.m10000;
        this->m20000 = this->m20000 - p.m20000;
        this->m50000 = this->m50000 - p.m50000;
        this->m100000 = this->m100000 - p.m100000;
        return *this;
    }

    Money operator+(Money p) {
        this->m10 = this->m10 + p.m10;
        this->m20 = this->m20 + p.m20;
        this->m50 = this->m50 + p.m50;
        this->m100 = this->m100 + p.m100;
        this->m500 = this->m500 + p.m500;
        this->m1000 = this->m1000 + p.m1000;
        this->m10000 = this->m10000 + p.m10000;
        this->m20000 = this->m20000 + p.m20000;
        this->m50000 = this->m50000 + p.m50000;
        this->m100000 = this->m100000 + p.m100000;
        return *this;
    }

    bool operator>(Money p)const {
        return ((this->m10 > p.GetM10()) ? true : false);
    }

    bool operator<(Money p)const {
        return ((this->m10 <  p.GetM10()) ? true : false);
    }

    bool operator==(Money p)const {
        return ((this->m10 ==  p.GetM10()) ? true : false);
    }

    bool operator!=(Money p)const {
        return ((this->m10 !=  p.GetM10()) ? true : false);
    }

    ~Money() {}
};

int main() {
    Money p1(10, 9 , 8, 7, 6, 5, 4, 3, 2, 1);
    Money p2(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);

    p2 - p1;
    p1 + p2;
    
    cout << p1.GetM10() << endl;
    cout << p2.GetM10() << endl << endl;

    cout << p1.GetM20() << endl;
    cout << p2.GetM20() << endl;

    if (p1 == p2) {
        cout << "Бля, опять миникупер нах" << endl;
    }
    else {
         cout << "Бля, опять порш нах" << endl;
    }

    if (p1 != p2) {
        cout << "Бля, опять миникупер нах" << endl;
    }
    else {
         cout << "Бля, опять порш нах" << endl;
    }

    if (p1 < p2) {
        cout << "Бля, опять миникупер нах" << endl;
    }
    else {
         cout << "Бля, опять порш нах" << endl;
    }

    if (p1 > p2) {
        cout << "Бля, опять миникупер нах" << endl;
    }
    else {
         cout << "Бля, опять порш нах" << endl;
    }

    return 0;
}