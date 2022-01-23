
#include<iostream>
#include<cmath>
#include<time.h>
#include<stdlib.h>

using namespace std; 

int main()
{
    const int M = 2;//количество строк
    const int N = 3;//количество столбцов;
    
    int matrix[M][N];
    /*double mas[M][N] = {{2.3, 5.4, 1.4}, {4.5, 7.7, 2.9}};
    matrix[0][0] = 3;
    matrix[1][2] = 5;
    matrix[0][1] = 1;
    matrix[0][2] = 9;*/
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout << "matrix["<<i<<"]["<<j<<"]: ";
            cin >> matrix[i][j];
        }
    }
    cout << "matrix:\n";
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout << matrix[i][j] << " | ";
        }
        cout << endl;
    }
}