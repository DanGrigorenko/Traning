
#include<iostream>
#include<time.h>
#include<stdlib.h>
 
using namespace std; 

int main()
{
    // x = a + rand()%(b-a+1); формула рандома
   srand(time(NULL));
   int x,y;
   cout << "first: ";
   cin >> x;
   cout << "Last: ";
   cin >> y;
   int z = x + rand()%(y-x+1);
   cout << z << endl; 
}