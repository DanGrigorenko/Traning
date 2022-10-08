#include <iostream>
using namespace std;

class Book {
protected:
    string avtor;
    string name;
    int year;
    int list;
    string vid_izd;
public:
    Book() {}

    Book(string avtor, string name, int year, int list, string vid_izd) {
        this->avtor = avtor;
        this->name = name;
        this->year = year;
        this->list = list;
        this->vid_izd = vid_izd;
    }

    Book(const Book& obj) {
        if (this == &obj) {
            return;
        }
        
        this->avtor = obj.avtor;
        this->name = obj.name;
        this->year = obj.year;
        this->list = obj.list;
        this->vid_izd = obj.vid_izd;
    }

    virtual void Show() = 0;

    ~Book() {}
};

class Spravka : public Book {
public:
    Spravka() {}

    Spravka(string avtor, string name, int year, int list, string vid_izd) : Book(avtor, name, year, list, vid_izd) {}

    Spravka(const Spravka& obj) {
        if (this == &obj) {
            return;
        }
        
        this->avtor = obj.avtor;
        this->name = obj.name;
        this->year = obj.year;
        this->list = obj.list;
        this->vid_izd = obj.vid_izd;
    }

    void Show() override {
        cout << "Автор:" << avtor << endl;
        cout << "Название:" << name << endl;
        cout << "Год:" << year << endl;
        cout << "Страницы:" << list << endl;
        cout << "Вид издание:" << vid_izd << endl << endl;
    }

    ~Spravka() {}
};

class Book_inform : public Book {
public:
    Book_inform() {}

    Book_inform(string avtor, string name, int year, int list, string vid_izd) : Book(avtor, name, year, list, vid_izd) {}

    Book_inform(const Book_inform& obj) {
        if (this == &obj) {
            return;
        }
        
        this->avtor = obj.avtor;
        this->name = obj.name;
        this->year = obj.year;
        this->list = obj.list;
        this->vid_izd = obj.vid_izd;
    }

    void Show() override {
        cout << "Автор:" << avtor << endl;
        cout << "Название:" << name << endl;
        cout << "Год:" << year << endl;
        cout << "Страницы:" << list << endl;
        cout << "Вид издание:" << vid_izd << endl;
    }

    ~Book_inform() {}
};
int main() {
    Spravka p1("Дэниал_Рэдклиф", "Фистинг_эйнал_нет_сак_дик", 2021, 1, "Миникупер");
    Book_inform p2("Спарф", "Каждому_своё", 2021, 2, "Верующий");

    p1.Show();
    p2.Show();
    return 0;
}