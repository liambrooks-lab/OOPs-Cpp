#include <iostream>
using namespace std;

int main()
{
    int n;
    long long fact = 1;

    cout << "Enter a number: ";
    cin >> n;

    if(n < 0)
    {
        cout << "Factorial not defined for negative numbers";
    }
    else
    {
        for(int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }

        cout << "Factorial of " << n << " = " << fact;
    }

    return 0;
}

/*
Output will be:
__________________
Sample Input:
5

Sample Output:
Factorial of 5 = 120

____________________
Concept:
____________________
Factorial of a number n is the product of all natural numbers
from 1 to n.

n! = 1 × 2 × 3 × ... × n


Special Case:
0! = 1
_____________________________________

Advantages:
1. Simple loop-based logic.
2. Easy to understand for beginners.
3. Demonstrates iterative multiplication.


Disadvantages:
1. Factorial grows very fast.
2. Large values may cause overflow even with long long.
*/