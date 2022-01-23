#include <iostream> 
#include <ctime>
using namespace std;

void gameStart() {
    int randNumber = 1 + rand() % 100;
    int tries = 0;
    int guess;

    cout << "\tWelcome to Guess My Number\n\n";

    do {
        cout << "Enter a guess: ";
        cin >> guess;
        ++tries;

        if (guess > randNumber) {
            cout << "Too high!\n\n";
        }
        else if (guess < randNumber) {
            cout << "Too low!\n\n";
        }
        else {
            cout << "\nThat's it! You got it in " << tries << " guesses!\n"; 
        }

    }while (guess != randNumber); 
}

int main() {
    srand(time(NULL));
    
    gameStart();
    return 0;
}