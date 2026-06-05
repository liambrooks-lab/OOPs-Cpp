#include <iostream>
using namespace std;

inline int add(int a, int b)
{
    return a + b;
}

inline int multiply(int a, int b)
{
    return a * b;
}

inline double average(int a, int b)
{
    return (a + b) / 2.0;
}

int main()
{
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Addition = " << add(x, y) << endl;
    cout << "Multiplication = " << multiply(x, y) << endl;
    cout << "Average = " << average(x, y) << endl;

    if(add(x, y) > 100)
    {
        cout << "Large sum detected." << endl;
    }
    else
    {
        cout << "Normal sum." << endl;
    }

    return 0;
}

/*Output will be:
___________________________
Sample Input:
10 20

Sample Output:
Addition = 30
Multiplication = 200
Average = 15
Normal sum.

____________________________________________________________________________________________
Concept Used:
______________________
Inline functions are expanded at compile time to reduce
function call overhead.
_______________________________

Advantages:
1. Faster execution for small functions.
2. Reduces function call overhead.
3. Useful for frequently used small operations.

Disadvantages:
1. Increases program size if overused.
2. Not suitable for large or complex functions.
3. Compiler may ignore inline if function is too big.
*/