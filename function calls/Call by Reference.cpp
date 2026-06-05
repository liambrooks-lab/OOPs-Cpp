#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 15, y = 25;

    cout << "Before Swapping:" << endl;
    cout << "x = " << x << " y = " << y << endl;

    swap(x, y);

    cout << "After Swapping:" << endl;
    cout << "x = " << x << " y = " << y << endl;

    return 0;
}

/*
Output will be:
________________________
Before Swapping:
x = 15 y = 25
After Swapping:
x = 25 y = 15

________________________________
Concept:
____________
Call by Reference passes the address of variables using reference
parameters (&). It allows the function to modify the original values.

__________________________________________________________
Advantages:
1. No copying of variables (efficient).
2. Changes reflect outside the function.
3. Useful for swapping and modifying data.


Disadvantages:
1. Can accidentally modify original data.
2. Harder to track changes in large programs.
*/