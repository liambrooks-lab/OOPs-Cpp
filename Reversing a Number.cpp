#include <iostream>
using namespace std;

int main()
{
    int n, reversed = 0, remainder;

    cout << "Enter a number: ";
    cin >> n;

    int original = n;

    while(n != 0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n = n / 10;
    }

    cout << "Reversed number = " << reversed;

    return 0;
}

/*
Output will be:
____________________________
Sample Input:
1234

Sample Output:
Reversed number = 4321

_____________________
Concept:
________________________
This program reverses a number using while loop.
It extracts digits one by one using modulus (%) and division (/).

Steps:
1. Get last digit using n % 10.
2. Add it to reversed number.
3. Remove last digit using n / 10.
4. Repeat until n becomes 0.
___________________________
Advantages:
1. Simple digit manipulation logic.
2. Works for any positive integer.
3. Helps in palindrome number problems.

Disadvantages:
1. May not handle very large integers (overflow issue).
2. Extra care needed for negative numbers.
*/