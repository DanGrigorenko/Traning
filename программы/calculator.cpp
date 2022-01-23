#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

    int num_1, num_2;
    char operation;
 
    cin >> num_1;
    cin >> operation;
    cin >> num_2;

    if (operation == '+'){
    cout << num_1 << "+" << num_2 << "=" << (num_1 + num_2) << endl;
    } 
    else if (operation == '-') {
     cout << num_1 << "-" << num_2 << "=" << (num_1 - num_2) << endl;
    } 
    else if (operation == '*') {
     cout << num_1 << "*" << num_2 << "=" << (num_1 * num_2) << endl;   
    } 
    else if (operation == '/') {
     cout << num_1 << "/" << num_2 << "=" << (num_1 / num_2) << endl;
    }     

    return 0; 
}       

