#include<iostream>

using namespace std;
int main() {
    FILE* wf;

    if (!(wf = fopen("zalupa.txt", "wt"))) {
        return 0;
    }

    int a;
    for (int i = 0; i < 5; i++) {
        cin >> a;
        fprintf(wf, "%d ", a);
    }

    fclose(wf);

    FILE* rf;
    if(!(rf = fopen("zalupa.txt", "rt"))) {
        return 0;
    }


    FILE* wf2;

    if (!(wf2 = fopen("zalupa2.txt", "wt"))) {
        return 0;
    }
    
    int d;
    
    while (!feof(rf)) {
        fscanf(rf, "%d ", &d);
        cout << d << " ";
        fprintf(wf2, "%d ", d);
    }

    
    fclose(rf);
    fclose(wf2);


    return 0;
}