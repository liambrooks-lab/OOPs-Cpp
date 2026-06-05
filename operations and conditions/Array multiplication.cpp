#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], mult[10][10];
    int Row1, Column1, Row2, Column2;

    cout << "Enter rows and columns for first matrix: ";
    cin >> Row1 >> Column1;

    cout << "Enter rows and columns for second matrix: ";
    cin >> Row2 >> Column2;

    while (Column1 != Row2)
    {
        cout << "Error! Column of first matrix must equal row of second matrix." << endl;

        cout << "Enter rows and columns for first matrix: ";
        cin >> Row1 >> Column1;

        cout << "Enter rows and columns for second matrix: ";
        cin >> Row2 >> Column2;
    }

    cout << "\nEnter elements of matrix 1:" << endl;
    for (int i = 0; i < Row1; i++)
    {
        for (int j = 0; j < Column1; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "\nEnter elements of matrix 2:" << endl;
    for (int i = 0; i < Row2; i++)
    {
        for (int j = 0; j < Column2; j++)
        {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < Row1; i++)
    {
        for (int j = 0; j < Column2; j++)
        {
            mult[i][j] = 0;
        }
    }

    for (int i = 0; i < Row1; i++)
    {
        for (int j = 0; j < Column2; j++)
        {
            for (int k = 0; k < Column1; k++)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "\nOutput Matrix:" << endl;
    for (int i = 0; i < Row1; i++)
    {
        for (int j = 0; j < Column2; j++)
        {
            cout << mult[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
Output will be:
_____________________
Sample Input:
Enter rows and columns for first matrix: 2 2
Enter rows and columns for second matrix: 2 2

Matrix 1:
1 2
3 4

Matrix 2:
5 6
7 8

Sample Output:
Output Matrix:
19 22
43 50

_______________________________________
Concept:
___________________
This program performs matrix multiplication.

Condition:
For multiplication,
Column1 must equal Row2.

Working:
1. Input matrix sizes.
2. Validate multiplication condition.
3. Use three nested loops:
   - First loop → rows of first matrix
   - Second loop → columns of second matrix
   - Third loop → multiplication and summation
4. Store result in mult[][] array.
_____________________________________________________
Advantages:
1. Demonstrates 2D arrays.
2. Shows triple nested loop logic.
3. Core concept for advanced math & graphics.

Disadvantages:
1. Fixed maximum size (10x10).
2. No dynamic memory handling.
*/