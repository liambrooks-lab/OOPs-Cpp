#include <iostream>
using namespace std;

int main()
{
    int day;

    cout << "Enter a number (1-7): ";
    cin >> day;

    switch(day)
    {
        case 1:
            cout << "Monday";
            break;

        case 2:
            cout << "Tuesday";
            break;

        case 3:
            cout << "Wednesday";
            break;

        case 4:
            cout << "Thursday";
            break;

        case 5:
            cout << "Friday";
            break;

        case 6:
            cout << "Saturday";
            break;

        case 7:
            cout << "Sunday";
            break;

        default:
            cout << "Invalid day!" << endl;
    }

    return 0;
}

/*
Output will be:
________________________
Sample Input:
3

Sample Output:
Wednesday

_______________________
Concept:
__________________
This program demonstrates the use of switch statement.
It selects one block of code based on the value of the variable.

Working:
1. User enters a number between 1 and 7.
2. switch checks the value.
3. Matching case executes.
4. break prevents execution of other cases.
5. default runs if no case matches.
_________________________
Advantages:
1. Cleaner than multiple if-else statements.
2. Easy to read for fixed choices.
3. Efficient for menu-based programs.

Disadvantages:
1. Works mainly with int or char values.
2. Not suitable for complex conditions.
*/