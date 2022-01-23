#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int j = 1, sum, i = 0;
    for(int k = 1; k <= 10; k++)//0 1 1 2 3 5 8 13 21 
    {
        cout << i << endl;
        sum = i + j;
        i = j;
        j = sum;
        
    }
    
    return 0;
}

