#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    int a[10][10], b[10][10], sum[10][10];

    cout << "Enter elements of first matrix:" << endl;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Enter elements of second matrix:" << endl;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> b[i][j];
        }
    }

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "Resultant Matrix after Addition:" << endl;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
Output will be:
_____________________________
Sample Input:
Enter number of rows and columns: 2 2
Enter elements of first matrix:
1 2
3 4
Enter elements of second matrix:
5 6
7 8

Sample Output:
Resultant Matrix after Addition:
6 8
10 12

_________________________
Concept:
_____________________________
This program performs addition of two matrices.
Both matrices must have same number of rows and columns.

Working:
1. User inputs size of matrix.
2. Elements of first and second matrix are stored.
3. Nested loops are used to add corresponding elements.
4. Result is stored in sum matrix and displayed.
____________________________________
Advantages:
1. Demonstrates 2D array usage.
2. Shows nested loop concept clearly.
3. Basic foundation for matrix operations.

Disadvantages:
1. Fixed maximum size (10x10).
2. No validation for oversized input.
*/