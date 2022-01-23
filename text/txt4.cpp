#include<iostream>
#include<time.h>

using namespace std;
int main() {
    FILE* wf;

    if (!(wf = fopen("zalupa.txt", "wt"))) {
        cout << "NO" << endl;
        return 0;
    }

    const int n = 5;
    double arr[n];
    for(int i = 0; i < n; i++) {
        arr[i] = (rand() % 20)/7.7;
        fprintf(wf, "%lf | ", arr[i]);
    }

    FILE* rf;
    
    if (!(rf = fopen("zalupa.txt", "wt"))) {
        cout << "NO" << endl;
        return 0;
    }

    FILE* wf2;

    if (!(wf2 = fopen("zalupa2.txt", "wt"))) {
        cout << "NO" << endl;
        return 0;
    }
    
    int x;
    while (feof(rf)) {
        fscanf(rf, "%lf ", x);
        fprintf(wf2, "%lf ", &x);
    }
    

    fclose(wf);
    fclose(rf);
    fclose(wf2);
    return 0;
}