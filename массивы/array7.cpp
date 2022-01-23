#include<iostream>
#include<cmath>
#include<time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    const int rows = 10;
    const int cols = 5;
    int **arr = new int* [rows];

    for(int i = 0; i < rows; i++)
    {
        *(arr + i) = new int [cols];
    }  

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 11 + 10;
        }
    }   

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }

    for(int i = 0; i < rows; i++)
    {
        delete [] *(arr + i);
    }
    delete [] arr;
    return 0;
}