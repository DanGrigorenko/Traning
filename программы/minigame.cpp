#include <iostream>
#include <time.h>
using namespace std;

class Hero {
private:
    int hp, power ,barry, damage;
    double coins;
public:
    Hero() {}

    Hero(int hp, int damage , int power, int barry, double coins) {
        this->hp = hp;
        this->barry = barry;
        this->power = power;
        this->damage = power/2;
        this->coins = coins;
    }

    void SetHp(int value) {
        this->hp = value;
    }
    void SetPower(int value) {
        this->power = value;
    }
    void SetCoins(double value) {
        this->coins = value;
    }
    void SetBarry(int value) {
        this->barry = value;
    }
    void SetDamage(int value) {
        this->damage = value/2;
    }

    int GetHp() {
        return hp;
    }
    int GetPower() {
        return power;
    }
    int GetDamage() {
        return damage;
    }
    int GetBarry() {
        return barry;
    }
    double GetCoins() {
        return coins;
    }

    void Comments(int blink) {
        if (blink == 0) {
            cout << "Герой: неудачный удар(промах)" << endl;
        }
        else if (blink >= 1 && blink <= 5) {
            cout << "Герой: слабый удар " << blink << endl;
        }
        else {
            cout << "Герой: мощный удар " << blink << endl;
        }
    }

    int Fight(int &enemyHp, int &blink) {
        int res = enemyHp - blink;
        return res;
    }

    void Dead() {
        cout << "Вы погибли(" << endl;
        exit(0);
    }

    Hero operator+(double x) {
        this->coins = this->coins + x;
        return *this;
    }

    Hero operator+(int x) {
        this->barry = this->barry + x;
        return *this;
    }

    Hero operator+(short int x) {
        this->hp = this->hp + x;
        return *this;
    }

    Hero operator-(int x) {
        this->barry = this->barry-x;
        return *this;
    }

    Hero operator-(double x) {
        this->coins= this->coins-x;
        return *this;
    }

    ~Hero() {}
};

class Enemy {
protected:
    int hp, damage;
public:
    Enemy() {}

    Enemy(int hp, int damage) {
        this->hp = hp;
        this->damage = damage;
    }

    int GetHp() {
        return hp;
    }
    int GetDamage() {
        return damage;
    }

    void SetHp(int value) {
        this->hp = value;
    }
    void SetDamage(int value) {
        this->damage = value;
    }

    bool Dead() {
        if (hp <= 0) {
            return true;
        }
        else {
            return false;
        }
    }

    void Comments(int blink) {
        cout << endl;
        if (blink == 0) {
            cout << "Враг: неудачный удар(промах)" << endl;
        }
        else if (blink >= 1 && blink <= 5) {
            cout << "Враг: слабый удар " << blink << endl;
        }
        else {
            cout << "Враг: мощный удар " << blink << endl;
        }
    }

    int LocationX() {
        int x = rand() % 10;
        if (x == 5) {
            x = rand() % 10;
        }
        return x;
    }
    int LocationY() {
        int y = rand() % 10;
        if (y == 5) {
            y = rand() % 10;
        }
        return y;
    }

    int Fight(int heroHp, int blink) {
        int res = heroHp - blink;
        return res;
    }

    ~Enemy() {}
};
class Goblin : public Enemy{
public:
    Goblin() {}

    Goblin(int hp, int damage) : Enemy(hp, damage) {}

    int LocationX() {
        int x = rand() % 4;
        if (x == 5) {
            x = rand() % 4;
        }
        return x;
    }
    int LocationY() {
        int y = rand() % 4;
        if (y == 5) {
            y = rand() % 4;
        }
        return y;
    }

    ~Goblin() {}
};

class Game {
public:
    void Games() {
        char d;
        int k;
        string dir = "a";
        int x = 5;
        int y = 5;
        Goblin gob(25, 15);
        Goblin gob2(50, 25);
        Goblin megagob(100, 50);
        Hero dan(100, 0, 20, 0, 0);

        STOP:
            cout << "1)Подолжить ходьбу." << "\n2)Закончить игру." << endl;
            cout << "Ввод: ";
            cin >> k;
            int locX = gob.LocationX();
            int locY = gob.LocationY();
            
            int locX2 = megagob.LocationX();
            int locY2 = megagob.LocationY();

            int locX3 = gob2.LocationX();
            int locY3 = gob2.LocationY();

        do {
            switch (k) {
                case 1: {
                    int a = 10;
                    int barry = 1;
                    string arr[a][a];
                    for (int i = 0; i < a; i++) {
                        cout  << " " << "_";
                    }
                    cout << endl;
                   
                    for (int i = 0; i < a; i++) {
                        for (int j = 0; j < a; j++) { 
                            if (i == x && j == y) {
                                if (j == a-1) {
                                    cout << "|" << "+" << "|";
                                }
                                else {
                                    cout << "|" << "+";
                                }
                                continue;
                            }

                            if ((i == 4 && j <= 4) || (i > 1 && i < 4 && j == 4) || (i == 0 && j == 4) || (i > 4 && i <= 9 && j == 0) || (i > 4 && i <= 9 && j == 1)) {
                                cout << "|" << "~";
                                continue;
                            }

                           
                            if (i == 1 && j == 4) {
                                cout << "|" << "=";
                                continue;
                            }

                            if (i == locX && j == locY) {
                                if (gob.Dead() == true) {
                                    cout << "|" << "x";
                                }
                                else {
                                    cout << "|" << "_";
                                }
                                continue;
                            }

                            if (i == locX3 && j == locY3) {
                                if (gob2.Dead() == true) {
                                    cout << "|" << "x";
                                }
                                else {
                                    cout << "|" << "_";
                                }
                                continue;
                            }

                            if (i == locX2 && j == locY2) {
                                if (megagob.Dead() == true) {
                                    cout << "|" << "M";
                                }
                                else {
                                    cout << "|" << "!";
                                }
                                continue;
                            }

                            if ((i == 9 && j > 1 && j <= 6) || (i <= 8 && i > 5 && j > 1 && j == 2) || (i <= 8 && i > 5 && j > 1 && j == 6) || (i == 6 && j > 2 && j <= 4)) {
                                cout << "|" << "#";
                                continue;
                            }

                            if (i == 6 && j == 5) {
                                cout << "|" << "-";
                                continue;
                            }

                            if (i == 7 && j == 3) {
                                cout << "|" << "%";
                                continue;
                            }

                            if (i == 8 && j == 5) {
                                cout << "|" << "$";
                                continue;
                            }

                            if ((((i == 0 || i == 6) && j == 8) || (i == 3 || i == 9) && j == 9) || (i == 2 || i == 4 || i == 8) && j == 7) {
                                if (j == 9) {
                                    cout << "|" << "*" << "|";
                                }
                                else {
                                    cout << "|" << "*";
                                }
                                
                                continue;
                            }

                            if (j == a-1) {
                                cout << "|_|";
                            }
                            else {
                                cout << "|" << "_";
                            }
                        }

                        cout << endl;
                    }
                    cout << "Здоровье: " << dan.GetHp() << "  " << "Сила: " << dan.GetPower() << "  " << "Ягод: " << dan.GetBarry() << "  " << "Монет: " << dan.GetCoins() << endl;
                    cout << "Выбериыте напрвление (s, w, d, a, stop, e): ";
                    cin >> dir;

                    if ((x == 0 && y == 8) || (x == 2 && y == 7) || (x == 3 && y == 9) || (x == 4 && y == 7) || (x == 6 && y == 8) || (x == 8 && y == 7) || (x == 9 && y == 9)) {
                        dan + barry;
                    }

                    if (x == 7 && y == 3) {
                        if (dan.GetBarry() == 0) {
                            cout << "Приходи если найдёшь что-нибудь!!!" << endl;
                        }
                        else {
                            dan - 1;
                            double x = 0.5;
                            dan + x;
                        }
                    }

                    if (x == 8 && y == 5) {
                        int n;
                        double x = dan.GetCoins();
                    BY:
                        cout << "1)Кинжал(200 монет) +20 к силе\n2)Меч(500 монет) +40 к силе\n3)Молот Тора(1000 монет) +80 к силе\n4)Выход\n";
                        cout << "Ввод: ";
                        cin >> n;

                        switch(n) {
                            case 1: {
                                double coins = 200.0;
                                if (x < 200) {
                                    cout << "Недостаточно денег!!!" << endl;
                                }
                                else {
                                    int a = 40;
                                    dan - coins;
                                    dan.SetPower(a); 
                                    dan.SetDamage(a);
                                }
                                break;
                            }
                            case 2: {
                                double coins = 500.0;
                                if (x < 500) {
                                    cout << "Недостаточно денег!!!" << endl;
                                }
                                else {
                                    int a = 60;
                                    dan - coins;
                                    dan.SetPower(a);
                                    dan.SetDamage(a); 
                                }
                                break;
                            }
                            case 3: {
                                double coins = 1000.0;
                                if (x < 1000) {
                                    cout << "Недостаточно денег!!!" << endl;
                                }
                                else {
                                    int a = 100;
                                    dan - coins;
                                    dan.SetPower(a); 
                                    dan.SetDamage(a);   
                                } 
                                break;
                            }
                            case 4: {
                                break;
                            }
                            default: {
                                cout << "Выбранное вами значение не существует!!!" << endl;
                                goto BY;
                            }
                        }
                    }

                    if (dir == "e") {
                        int x = 1;
                        short int x2 = 1;
                        if (dan.GetBarry() == 0) {
                            cout << "Насобирай ягода и потом лечись!!!" << endl;
                        }
                        else if (dan.GetHp() == 100) {
                            cout << "У вас максимальное количество здоровья!!!" << endl;
                        }
                        else {
                            dan - x;
                            dan + x2;
                        }
                    }

                    if (x == a-1 && dir == "s") {
                        cout << "Горные цепи прпятствуют вашему движению!!!" << endl;
                    }
                    else if ((x == 3 && y <= 3) || (x == 1 && y == 4) && dir == "s") {
                        cout << "Герой не сможет пройти по реке, нужен другой способ!" << endl;
                    }
                    else if ((x == 8 && y < 6 && y > 2) || (x == 5 && y >= 2 && y <= 4) || (x == 5 && y == 6) && dir == "s") {
                        cout << "Если так и будешь биться в стенку, то ничего не изменится. Выход в другой стороне!!!" << endl;
                    }
                    else if (dir == "s") {
                        x++;
                    } 
                    
                    if (x == 0 && dir == "w") {
                        cout << "Горные цепи прпятствуют вашему движению!!!" << endl;
                    }
                    else if ((x == 5 && y <= 4) || (x == 1 && y == 4) && dir == "w") {
                        cout << "Герой не сможет пройти по реке, нужен другой способ!" << endl;
                    }
                    else if ((x == 7 && y < 5 && y > 2) && dir == "w") {
                       cout << "Если так и будешь биться в стенку, то ничего не изменится. Выход в другой стороне!!!" << endl;
                    }
                    else if (dir == "w") {
                        x--;
                    }   
                    
                    if (y == a-1 && dir == "d") {
                        cout << "Горные цепи прпятствуют вашему движению!!!" << endl;
                    }
                    else if ((y == 3 && x == 0) || (y == 3 && x > 1 && x <= 3) && dir == "d") {
                        cout << "Герой не сможет пройти по реке, нужен другой способ!" << endl;
                    }
                    else if ((x == 6 && y == 5) || (x > 6 && x < 9 && y == 5) || (x > 5 && x <= 9 && y == 1) && dir == "d") {
                       cout << "Если так и будешь биться в стенку, то ничего не изменится. Выход в другой стороне!!!" << endl;
                    }
                    else if (dir == "d") {
                        y++;
                    } 

                    if (y == 0 && dir == "a") {
                        cout << "Горные цепи прпятствуют вашему движению!!!" << endl;
                    }  
                    else if ((y == 5 && x == 0) || (y == 5 && x > 1 && x <= 4) && dir == "a") {
                        cout << "Герой не сможет пройти по реке, нужен другой способ!" << endl;
                    }
                    else if ((x >= 6 && x <= 9 && y == 7) || (x == 6 && y == 5) || (x >= 7 && x <= 8 && y == 3) || (x == 5 && y == 2) && dir == "a") {
                       cout << "Если так и будешь биться в стенку, то ничего не изменится. Выход в другой стороне!!!" << endl;
                    }
                    else if (dir == "a") {
                        y--;
                    }

                    if (dir == "stop") {
                        goto STOP;
                    }

                    if (gob.GetHp() <= 0 && x == locX && y == locY) {
                        cout << "Здесь раньше водилась шайка гоблинов, но вы их разгромили!" << endl;
                    }
                    else {
                         if (x == locX && y == locY) {
                            int choos;
                            cout << "\nВы встретили шайку гоблинов!!! Возможная награда до 10 монет" << endl;
                            cout << "Враг - " << "Здоровье: " << gob.GetHp() << "\t" << "Урон: " << gob.GetDamage() << endl;
                            cout << "Герой - " << "Здоровье: " << dan.GetHp() << "  " << "Урон: " << dan.GetDamage() << endl;
                            cout << "\nБудете бороться(1)\nПопытаетесть убежать(2)\nВвод: ";
                            cin >> choos;

                            if(choos == 1) {
                            FIGHT:
                                int Hdamage = dan.GetDamage() + 1;
                                int Edamage = gob.GetDamage() + 1;
                                int Hhp, Ehp;
                                do {
                                    if (gob.Dead() == true) {
                                        double coins = 1 + rand() % + (10-1+1);
                                        cout << "\nВы победили!!!  +" << coins <<  " монет" << endl;
                                        dan + coins;
                                        break;
                                    }
                                    else {
                                        Hhp = dan.GetHp();
                                        int enemyblink = 10 + rand() % (Edamage - 10 + 1);
                                        gob.Comments(enemyblink);
                                        int heroHP = gob.Fight(Hhp, enemyblink);
                                        dan.SetHp(heroHP);

                                        Ehp = gob.GetHp();
                                        int heroblink = rand() % Hdamage;
                                        dan.Comments(heroblink);
                                        int enemyHP = dan.Fight(Ehp, heroblink);
                                        gob.SetHp(enemyHP);
                                    }

                                    if (Hhp <= 0) {
                                        dan.Dead();
                                        break;
                                    }
                                } while(gob.Dead() != true || Hhp > 0);
                            }
                            else {
                                int random = rand() % 2;
                                if(random == 0) {
                                    cout << "Вам удалось сбежать!" << endl;
                                }
                                else {
                                    cout << "Гоблин сделал вам подножку, придётся биться!" << endl;
                                    goto FIGHT;
                                }
                            }
                            gob.~Goblin();
                        }
                    }  

                    if (gob2.GetHp() <= 0 && x == locX3 && y == locY3) {
                        cout << "Здесь раньше водилась шайка гоблинов, но вы их разгромили!" << endl;
                    }
                    else {
                         if (x == locX3 && y == locY3) {
                            int choos;
                            cout << "\nВы встретили шайку гоблинов!!! Возможная награда до 15" << endl;
                            cout << "Враг - " << "Здоровье: " << gob2.GetHp() << "\t" << "Урон: " << gob2.GetDamage() << endl;
                            cout << "Герой - " << "Здоровье: " << dan.GetHp() << "  " << "Урон: " << dan.GetDamage() << endl;
                            cout << "\nБудете бороться(1)\nПопытаетесть убежать(2)\nВвод: ";
                            cin >> choos;

                            if(choos == 1) {
                            FIGHT2:
                                int Hdamage = dan.GetDamage() + 1;
                                int Edamage = gob2.GetDamage() + 1;
                                int Hhp, Ehp;
                                do {
                                    if (gob2.Dead() == true) {
                                        double coins = rand() % + (15-1+1);
                                        cout << "\nВы победили!!!  +" << coins <<  " монет" << endl;
                                        dan + coins;
                                        break;
                                    }
                                    else {
                                        Hhp = dan.GetHp();
                                        int enemyblink = 20 + rand() % (Edamage - 20 + 1);
                                        gob2.Comments(enemyblink);
                                        int heroHP = gob2.Fight(Hhp, enemyblink);
                                        dan.SetHp(heroHP);

                                        int min = Hdamage - 10;
                                        Ehp = gob2.GetHp();
                                        int heroblink = min + rand() % (Hdamage - min + 1);
                                        dan.Comments(heroblink);
                                        int enemyHP = dan.Fight(Ehp, heroblink);
                                        gob2.SetHp(enemyHP);
                                    }

                                    if (Hhp <= 0) {
                                        dan.Dead();
                                        break;
                                    }
                                } while(gob2.Dead() != true || Hhp > 0);
                            }
                            else {
                                int random = rand() % 2;
                                if(random == 0) {
                                    cout << "Вам удалось сбежать!" << endl;
                                }
                                else {
                                    cout << "Гоблин сделал вам подножку, придётся биться!" << endl;
                                    goto FIGHT2;
                                }
                            }
                            gob2.~Goblin();
                        }
                    }  

                    if (megagob.GetHp() <= 0 && x == locX2 && y == locY2) {
                        cout << "Паямятник мегагоблина!" << endl;
                    }
                    else {
                        if (x == locX2 && y == locY2) {
                            cout << "\nВы встретили мегагоблина!!!" << endl;
                            cout << "Враг - " << "Здоровье: " << megagob.GetHp() << "\t" << "Урон: " << megagob.GetDamage() << endl;
                            cout << "Герой - " << "Здоровье: " << dan.GetHp() << "  " << "Урон: " << dan.GetDamage() << endl;
                            cout << "\nУбежать от него у вас не получиться, деритесь!!!";

                            int Hdamage = dan.GetDamage() + 1;
                            int Edamage = megagob.GetDamage() + 1;
                            int Hhp, Ehp;
                            do {
                                if (megagob.Dead() == true) {
                                    cout << "\nВы победили!!!" << endl;
                                    d = 1;
                                    break;
                                }
                                else {
                                    Hhp = dan.GetHp();
                                    int enemyblink = 40 + rand() % (Edamage - 40 + 1);
                                    megagob.Comments(enemyblink);
                                    int heroHP = megagob.Fight(Hhp, enemyblink);
                                    dan.SetHp(heroHP);

                                    int min = Hdamage - 10; 
                                    Ehp = megagob.GetHp();
                                    int heroblink = min + rand() % (Hdamage - min + 1);
                                    dan.Comments(heroblink);
                                    int enemyHP = dan.Fight(Ehp, heroblink);
                                    megagob.SetHp(enemyHP);
                                }

                                if (Hhp <= 0) {
                                    dan.Dead();
                                    break;
                                }
                            } while(megagob.Dead() != true || Hhp > 0);
                            megagob.~Goblin();
                        }
                    }  
                    break;
                }
                case 2: {
                    cout << "Очень жаль, что не прошли игру до конца(" << endl;
                    d = 1;
                    break;
                }
            }       
        } while (d != 1);
    }
};

int main() {
    srand(time(NULL));
    Game g;
    g.Games();
    return 0;
}