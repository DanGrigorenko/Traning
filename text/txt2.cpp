#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int n0 = 100;
    char path[n0];

    cout << "Введите название вашего текстового файла: ";
    cin.getline(path, n0);

    fstream fs;

    fs.open(path, fstream::app | fstream::in | fstream::out);

    if (!fs.is_open()) {
        cout << "Ошибка открытия файла." << endl;
    }
    else {
        string msg;

    cout << "\nСодержимое файла: " << path << endl;
        while (!fs.eof()) {
            msg = "";
            fs >> msg;
            cout << msg << endl;
        }
    }
    
    fs.close();  
 
    return 0;
}