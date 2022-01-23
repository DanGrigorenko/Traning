#include <iostream> 
#include <ctime>
#include <string>
#include <vector>
using namespace std;

void gues(int error) {
    if (error == 0) {
        cout << "________" << endl;
        cout << "|       |" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "__________" << endl;
    }
    else if (error == 1) {
        cout << "________" << endl;
        cout << "|       |" << endl;
        cout << "|       0" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "__________" << endl;
    }
     else if (error == 2) {
        cout << "________" << endl;
        cout << "|       |" << endl;
        cout << "|       0" << endl;
        cout << "|       |" << endl;
        cout << "|" << endl;
        cout << "__________" << endl;
    }
    else if (error == 3) {
        cout << "________" << endl;
        cout << "|       |" << endl;
        cout << "|       0" << endl;
        cout << "|       |" << endl;
        cout << "|      - " << endl;
        cout << "__________" << endl;
    }
    else if (error == 4) {
        cout << "________" << endl;
        cout << "|       |" << endl;
        cout << "|       0" << endl;
        cout << "|       |" << endl;
        cout << "|      - -" << endl;
        cout << "__________" << endl;
    }
    else if (error == 5) {
        cout << "________" << endl;
        cout << "|       |" << endl;
        cout << "|       0" << endl;
        cout << "|      -|" << endl;
        cout << "|      - -" << endl;
        cout << "__________" << endl;
    }
    else if (error == 6) {
        cout << "________" << endl;
        cout << "|       |" << endl;
        cout << "|       0" << endl;
        cout << "|      -|-" << endl;
        cout << "|      - -" << endl;
        cout << "__________" << endl;
    }
}
 
void gameStart() {
    string word;
    char ch = ' ';
    int error = -1;
    bool gameOver = false;
    vector<char> mistake;

    cout << "Загадайте слово: ";
    cin >> word;

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    
    int length = word.size();
    char arr[length];

    for (int i = 0; i < length; i++) {
        arr[i] = '?';
    }
    
    while (gameOver == false) {
        int count = 0;
        for (int i = 0; i < length; i++) {
            if (arr[i] == word[i]) {//проверка на совподение разгаданых букв с загаданым словом
                count++;
            }
            else {
                break;
            }
        }
        
        if (count == length) {
            gameOver = true;
            cout << "Вы отгадали слово, поздравляю!!!" << endl;
            break;
        }
        
        bool flag2 = false;
        bool flag = false;

        for (int i = 0; i < length; i++) {
            if (ch == word[i]) {
                arr[i] = ch;
                flag = true;//подтверждение того, что буква угадана
            }
        }

        if (flag == false) {
            error++;
        }
       
        gues(error);

        if (error == 6) {
            gameOver = true;
            cout << "Вы не успели угадать слово :(" << endl;
            cout << "Загаданое слово: \'" << word << "\'." << endl;
            break;
        }

        if (flag == false) {//если буква неправильная
            for (char a : mistake) {//читаем из вектора неправильные буквы
                if (a == ch) {
                    cout << "Вы уже вводили эту букву!!!" << endl;
                    flag2 = true;//если буква есть в массиве больше не заносить
                    break;
                }
            }
        }

        for (int i = 0; i < length; i++) {
            cout << arr[i];
        }

        cout << endl;
       
        if (flag2 == false) {
            mistake.push_back(ch);
        }
        
        for (char a : mistake) {
            cout << a << " ";
        }
        
        cout << "\nВведите букву: ";
        cin >> ch;
    }

}

int main() {
    srand(time(NULL));
   
    gameStart();
    return 0;
}