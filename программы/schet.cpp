#include<iostream>
using namespace std;

int main() {
    int count1 = 0;
    int count2 = 0;
    bool player;
    bool flag = true;

    while(flag) {
        cout << "Счёт: " << count1 << " : " << count2 << endl;
        cin >> player;

        if (player == true) {
            count1++;
        }
        else {
            count2++;
        }

        if (count1 == 11) {
            cout << "Счёт: " << count1 << " : " << count2 << endl;
            cout << "Игрок 1 победил!!!" << endl;
            flag = false;
        }
        else if (count2 == 11) {
            cout << "Счёт: " << count1 << " : " << count2 << endl;
            cout << "Игрок 2 победил!!!" << endl;
            flag = false;
        }
    }    
    return 0;
}