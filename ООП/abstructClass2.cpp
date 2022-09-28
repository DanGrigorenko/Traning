#include <iostream>
using namespace std;

class Gun
{
public:
    Gun() {}
    ~Gun() {}

    virtual void shoot() = 0;
};

class Pistol : public Gun
{
public:
    Pistol() {}
    ~Pistol() {}

    void shoot() override {
        cout << "BANG" << endl;
    }
};

class Avtomat : public Gun
{
public:
    Avtomat() {}
    ~Avtomat() {}

    void shoot() override {
        cout << "BANG BANG BANG BANG" << endl;
    }
};


class Bazoka : public Gun
{
public:
    Bazoka() {}
    ~Bazoka() {}

    void shoot() override {
        cout << "BOOOOOOOOM" << endl;
    }
};

class Client
{
public:
    Client() {}
    ~Client() {}

    void action(Gun *obj) {
        obj->shoot();
    }
};

int main() {
    Client client;
    Bazoka bazoka;
    Pistol pistol;
    Avtomat avtomat;
    client.action(&pistol);
    return 0;
}