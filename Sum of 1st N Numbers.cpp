#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    if(n < 0)
    {
        cout << "Sum not defined for negative numbers";
    }
    else
    {
        for(int i = 1; i <= n; i++)
        {
            sum = sum + i;
        }

        cout << "Sum of first " << n << " natural numbers = " << sum;
    }

    return 0;
}

/*
Output will be:
__________________
Sample Input:
5

Sample Output:
Sum of first 5 natural numbers = 15

_____________________________
Concept:
___________________________
This program calculates the sum of first n natural numbers.
It adds numbers from 1 to n using a for loop.

Formula:
n(n + 1) / 2

_______________________________
Advantages:
1. Simple logic using loop.
2. Easy to understand for beginners.
3. Good foundation for arithmetic series.

Disadvantages:
1. Slightly slower for very large n compared to formula method.
2. Requires iteration.
*/