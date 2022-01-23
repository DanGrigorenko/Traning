#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << setw(7) << "Surname" << setw(6) << "Name" << setw(11) << "Adress" << setw(14) << "City" << endl;
    cout << "-----------------------------------------" << endl; 
    cout << setw(6) << "Petrov" << setw(10) << "Vasiliy" << setw(13) << "Klenovay 16" << setw(10) << "Minsk" << endl;
    cout << setw(6) << "Sidarov" << setw(6) << "Gena" << setw(19) << "Berlinskaya 13" << setw(11) << "Soligorsk" << endl;
    return 0;
}