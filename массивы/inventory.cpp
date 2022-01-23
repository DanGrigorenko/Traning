#include <iostream> 
#include <ctime>
using namespace std;

void gameStart() {
    const int Max = 10;
    string inventory[Max];
    int numItems = 0;
    inventory[numItems++] = "Дилдо";
    inventory[numItems++] = "БДСМ_КОСТЮМ";
    inventory[numItems++] = "Анальная_пробка";

    cout << "Твои вещи: ";
    for (int i = 0; i < numItems; i++) {
        cout << inventory[i] << " | ";
    }

    cout << endl;

    int n;
    cout << "Хочешь обменять дилдо на секс куклу 1-да, 2-нет\n";
    cin >> n;

    switch (n) {
        case 1: {
            inventory[0] = "Секс_кукла";
            cout << "Твои вещи: ";
            for (int i = 0; i < numItems; i++) {
                cout << inventory[i] << " | ";
            }
            break;
        }
        case 2: {
            cout << "как хочешь" << endl;
            break;
        }
        default: {
            cout << "даун" << endl;
        }
    }
}

int main() {
    srand(time(NULL));
    gameStart();
    return 0;
}