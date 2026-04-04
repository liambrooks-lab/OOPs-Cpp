#include <iostream>
using namespace std;

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 40, y = 60;

    cout << "Before Swapping:" << endl;
    cout << "x = " << x << " y = " << y << endl;

    swap(x, y);

    cout << "After Swapping:" << endl;
    cout << "x = " << x << " y = " << y << endl;

    return 0;
}

/*
Output wil be:
_____________________
Before Swapping:
x = 40 y = 60
After Swapping:
x = 40 y = 60

__________________________
Concept:
_________________________________________
Call by Value passes a copy of the variables to the function.
The original variables remain unchanged.
____________________
Explanation:
________________
Inside swap(), only copies of x and y are modified.
The actual variables in main() are not affected.

____________________________________
Advantages:
1. Safe because original data is not changed.
2. Easy to understand.
3. No risk of accidental modification.

Disadvantages:
1. Extra memory used for copying.
2. Changes inside function do not reflect outside.
3. Not suitable when we need to modify original values.
*/