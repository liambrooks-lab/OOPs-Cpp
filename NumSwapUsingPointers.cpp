#include <iostream>
using namespace std;

void swapvalue(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    swapvalue(&a, &b);

    cout << "After swapping: first number = " << a
         << ", second number = " << b << endl;

    return 0;
}

/*
Output will be:
____________________
Sample Input:
10 20

Sample Output:
After swapping: first number = 20, second number = 10

_____________________
Concept:
________________________
This program demonstrates Call by Pointer in C++.
The addresses of variables are passed to the function.

Working:
1. &a and &b send the addresses of variables.
2. Inside function, *a and *b access actual values.
3. Values are swapped using a temporary variable.
____________________________________
Advantages:
1. Original values can be modified.
2. Efficient because no copying of variables.
3. Useful in arrays and dynamic memory handling.

Disadvantages:
1. More complex syntax than reference.
2. Risk of null or invalid pointer errors.
3. Harder to debug in large programs.
*/