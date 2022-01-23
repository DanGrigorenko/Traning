
#include<iostream>
#include<cmath>
#include<time.h>
#include<stdlib.h>

using namespace std; 

int main()
{
   srand(time(NULL)); 
   int m[1000];
   int x = 5;
   int y = 10;
   for(int i = 0; i < 10; i++)
   {
       int r = rand();
       m[i] = x + r%(y-x+1);
       cout << m[i] << " " << r << endl;   
   }

}