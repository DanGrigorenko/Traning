#include "Sportsman.h"

Sportsman::Sportsman(int counterVictory_, double weight_, char nickName_, bool fractures_, std::string& name_) :
    counterVictory(counterVictory_), weight(weight_),  nickName(nickName_), fractures(fractures_), name(name_) 
{
    std::cout << "Constructor Sportsman" << std::endl;
}

Sportsman::~Sportsman()
{
    std::cout << "\nDestructor Sportsman" << std::endl;
}


void Sportsman::setCounterVictory(int value) {
    if (value < 0) 
        throw std::invalid_argument("Число побед не может быть отрицательным!");
    this->counterVictory = value;
}

void Sportsman::setWeight(double value) {
    if (value < 30) 
        throw std::invalid_argument("Необходимо набрать массу!");
    else if (value > 90) 
        throw std::invalid_argument("Необходимо сбросить массу!");
    this->weight = value;
}

void Sportsman::setNickName(char value) {
    this->nickName = value;
}

void Sportsman::setFractures(bool value) {
    if (value < 0) 
        throw std::invalid_argument("Число побед не может быть отрицательным!");
    this->fractures = value;
}

void Sportsman::setName(std::string& value) {
    this->name = value;
}


int Sportsman::getCounterVictory() const {
    return this->counterVictory;
}

double Sportsman::getWeight() const {
    return this->weight;
}

char Sportsman::getNickName() const {
    return this->nickName;
}

bool Sportsman::getFractures() const {
    return this->fractures;
}

std::string Sportsman::getName() const {
    return this->name;
}



void Sportsman::infoSportsman() const {
    std::cout << "Имя: " << getName() << "\nКличка: " << getNickName() << "\nКоличество побед: " 
    << getCounterVictory() << "\nВес: " << getWeight() << "\nБыли переломы: " << getFractures();
}

double Sportsman::bodyMassIndex(double height) {
    return getWeight()/height;
}
