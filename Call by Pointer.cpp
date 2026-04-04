#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 30, y = 50;

    cout << "Before Swapping:" << endl;
    cout << "x = " << x << " y = " << y << endl;

    swap(&x, &y);

    cout << "After Swapping:" << endl;
    cout << "x = " << x << " y = " << y << endl;

    return 0;
}

/*Output will be:
______________________
Before Swapping:
x = 30 y = 50
After Swapping:
x = 50 y = 30

_______________________
Concept:
___________________
Call by Pointer passes the address of variables to the function.
Pointers (*) are used to access and modify the original values.

________________________________________________
Advantages:
1. No copying of variables.
2. Original values can be modified.
3. Useful in dynamic memory and arrays.


Disadvantages:
1. More complex syntax.
2. Risk of null or invalid pointer errors.
3. Harder to understand for beginners.
*/