#include<iostream>
using namespace std;

int main() {

    FILE* wf;

    if (!(wf = fopen("zalupa.txt", "wt"))) {
        cout << "Даун" << endl;
        return 0;
    }

    int a;
    for (int i = 0; i < 10; i++) {
        cin >> a;
        fprintf(wf, "%d ", a);
    }

    fclose(wf);

    FILE* rf;

    if (!(rf = fopen("zalupa.txt", "rt"))) {
        cout << "Даун" << endl;
        return 0;
    }
    
    FILE* wf2;

    if (!(wf2 = fopen("zalupa2.txt", "wt"))) {
        cout << "Даун" << endl;
        return 0;
    }
    int x;

    while (!feof(rf)) {
        fscanf(rf, "%d ", &x);
        cout << x << " ";
        if (x < 0 || x % 3 == 0) {
            fprintf(wf2,"%d ",x);
        }    
    }
    
    fclose(rf);
    fclose(wf2);

    return 0;
}