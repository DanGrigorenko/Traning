#include<iostream>
#include<fstream>
#include<time.h>

using namespace std;

int main() {
    srand(time(NULL));
    ofstream wf;

    wf.open("zalupa", ios::out);

    if (!wf.is_open()) {
        return 0;
    }
    const int a = 4;
    int r;
    for(int i = 0; i < a; i++) {
        cin >> r;
        wf << r << " ";
    }

    wf.close();

    ifstream rf;

    rf.open("zalupa", ios::in);

    if (!rf.is_open()) {
        return 0;
    }

    ofstream wf2;

    wf2.open("zalupa2", ios::out);

    if (!wf2.is_open()) {
        return 0;
    }

    int arr2[a];
    int i = 0;

    while (!rf.eof())
    {   
        rf >> arr2[++i]; 
        cout << arr2[i-1] << " ";
        wf2 << arr2[i-1] << " ";
        
    }

    rf.close();
    wf2.close();
    return 0;
}