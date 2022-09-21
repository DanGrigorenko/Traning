#include <iostream>
#include "Sportsman.cpp"
#include <vector>
using namespace std;
int main() {
    try {
        std::string name = "Саша";
        Sportsman* person = new Sportsman(3, 56.6, 'd', false, name);
        person->infoSportsman();
        cout << "\nИМТ: " << person->bodyMassIndex(1.83);
        person->~Sportsman();
    }
    catch (invalid_argument &ex) {
        cout << ex.what() << endl;
    }
    return 0;
}