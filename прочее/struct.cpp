#include<iostream>
#include<string.h>

using namespace std;

int main() {

    const int n0 = 20;
    struct karandash {

        char name[n0];
        double length;
        double weight[2];

    };

    int n;

    cout << "Сколько у вас карандашей: ";
    cin >> n;

    if(n < 0) {
        n = -n;
        cout << "Количество карандашей не может быть отрицательным: " << n << endl;
    }

    karandash* pachka = new karandash[n];

    if(pachka == NULL) {

        cout << "Нет памяти." << endl;
        return 0;
    }

    for(int i = 0; i < n; i++) {

        cout << "Введите название модели(до " << n0 << " символов без пробелов): ";
        cin >> pachka[i].name;

        cout << "Введите длину карандаша: ";
        cin >> pachka[i].length;

        cout << "Введите вес нового карандаша и потом введите его вес сейчас: ";
        for(int j = 0; j < 2; j++) {
            cin >> pachka[i].weight[j];
        }
    }

    cout << "Карандаши: \n";
    for(int i = 0; i < n; i++) {

        cout << pachka[i].name << " | " << pachka[i].length << " | ";

        for(int j = 0; j < 2; j++) {

            cout << pachka[i].weight[j] << " | ";

        }
        cout << endl;
    }

    char name0[n0];
    int z = 0;

    cout << "\nКарандаш с каким названием вы ищите: ";
    cin >> name0;

    for(int i = 0; i < n; i++) {

        int w = strcmp(pachka[i].name, name0);
        if(w == 0) {
            z++;
        }
    }

    if(z == 0) {
        cout << "Карандаш с таким названием в пачке нет. \n";
    }
    else {
        cout << "В пачке есть " << z << " карандашей с точно таким же названием.\n";
    }

    delete [] pachka;
    return 0;
}
     