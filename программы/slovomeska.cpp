#include <iostream> 
#include <ctime>
#include <string>
using namespace std;

void gameStart() {
    enum fields {WORD, HINT, NUM_FIELDS};
    const int NUM_WORDS = 5;
    const string WORDS[NUM_WORDS][NUM_FIELDS] = 
    {
        {"wall", "Do you feel you're banging your head against something?"},
        {"glasses", "These might help you see the answer. "},
        {"labored", "Going slowly. is it?"},
        {"persistent", "Кеер at it."},
        {"jumble", "It's what the game is all about."}
    };

    int choice = rand() % NUM_WORDS;

    string theWord = WORDS[choice][WORD];
    string theHint = WORDS[choice][HINT];

    string jumble = theWord;
    int length = jumble.size();

    for (int i = 0; i < length; i++) {
        int index1 = rand() % length;
        int index2 = rand() % length;

        char temp = jumble[index1];
        jumble[index1] = jumble[index2];
        jumble[index2] = temp;
    }

    cout << "\tWelcome to Word Jumble!\n\n";
    cout << "Перемешанное слово: " << jumble << endl;

    string guess;
    cout << "\nВаш ответ: ";
    cin >> guess;

    while ((guess != theWord) && (guess != "quit")) {
        if (guess == "hint") {
            cout << theHint;
        }
        else {
            cout << "Извини, не угадал!" << endl;
        }

        cout << "\nВаш ответ: ";
        cin >> guess;
    }

    if (guess == theWord) {
        cout << "Верно!!! Вы угадали." << endl;
    }

    cout << "Спасибо за игру!" << endl;
}

int main() {
    srand(time(NULL));
   
    gameStart();
    return 0;
}