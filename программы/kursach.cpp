#include<iostream>
#include<string.h>
#include<unistd.h>
#include<time.h>
#include<fstream>
#include<vector>

using namespace std;

struct Card {
public:
    char suit;
    char rank;    
};

class Deck {
public:
    Deck() {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 13; j++) {
               cards[i * 13 + j].suit = i;
               cards[i * 13 + j].rank = j;
            }
        }
    }

    void Show() {
        for (int i= 0; i < 52; i++) {
            cout << ranks[cards[i].rank] << suits[cards[i].suit] << endl;
        }    
    }

    void Shuffle() {
        top = 51;
        int x;
        Card tempCard;

        cout << "Идёт тасовка карт..." << endl << endl;
        sleep(2);

        for (int i = 0; i < 52; i++) {
            x = rand() % 52;
            tempCard = cards[i];
            cards[i] = cards[x];
            cards[x] = tempCard;
        }
    }

    Card Hitme(){
        top--;
        return cards[top + 1];
    }
    
private:
    int top;
    Card cards[52]; 
    string suits[4] = {"s", "h", "c", "d"};
    string ranks[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "T", "J", "Q", "K", "A"}; 
};

class Player {
public:    
    string name;
    Card hand[2];
    int money;
};

class Game {
public: 

    void List(int count, string name) {
        ofstream fout;
        fout.open("Список лидеров", ios::app | ios::out);

        if (!fout.is_open()) {
            cout << "Файл не удалось открыть." << endl;
        }

        for (auto &player : players) {
            //fprintf("%10s %5d %5d",player.name.c_str(), count_game, count_point);//
            fout << player.name << "  " << count_game << " : " << count_point << endl;
        }

        fout.close();

        int p;
        cout << "Для вывода списка лидеров на экран нажмите(1). Для выхода нажмите(2): ";
        cin >> p;
        
        switch (p) {
            case 1: {
                ifstream read_file;
                read_file.open("Список лидеров", ios::in);

                if (!read_file.is_open()) {
                    cout << "Файл не удалось открыть." << endl;
                }

                char symbol;
                cout << "\nСписок лидеров: " << endl;
                while (read_file.get(symbol)) {
                    cout << symbol;
                }
                
                read_file.close();
                break;
            }  
            case 2: {
                break;
            }  
            default: {
                cout << "Нет такого пункта!!!" << endl;
            }
        }
    }
 
    void Start(string name, int count) {  
        for (int i = 0; i < count - 1; i++) {
            player.name = names_players[i];
            player.money = 1000;
            players.push_back(player);
        }
        player.name = name;
        players.push_back(player);
    }

    void Show2() {
        for (auto &player : players) {
            cout << "Имя: " << player.name << "\nБаланс: " << player.money << "$\n" << "Карты: " << player.hand << "\n" << endl;
        }
    }    
private:
    int count_game = 0;
    int count_point = 0;
    vector <Player> players;
    Player player;
    string names_players[10] = {"Овенус", "Алмаз", "Юнус", "Мучасас", "Хабиб", "Гарик", "Соленоид", "Настя" , "Ким"};
}; 

int main() {
    srand(time(NULL));
    
    int count = 0;
    cout << "Введите количество игроков(2-10): ";
    cin >> count;

    while (count <= 1 || count > 10) {
        cout << "Количество игроков недолжно превышать 10 и не должно быть меньше 0: ";
        cin >> count;
    }

    string name;
    cout << "Введите ваше имя: ";
    cin >> name; 

    Game f;
    f.Start(name, count);
    f.Show2();
    f.List(count, name);
    
    return 0;
}