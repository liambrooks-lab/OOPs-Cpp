#include <iostream>
using namespace std;

int main()
{
    string username, password;

    cout << "Ehh mate..! Gotta spill up your name ya?! 😃: ";
    getline(cin, username);

    cout << "Hope u remember to enter your password too innit? 😏: ";
    getline(cin, password);

    if(username == "MR. Liam Brooks" && password == "The._ENGLISH_MAN")
    {
        cout << "Login Successful!!! Fancy a cheeky wink right ya?! 👍";
    }
    else
    {
        cout << "Invalid Username or Password! SORT YOUR LIFE! 😏";
    }

    return 0;
}

/*
Output will be:
________________________
Sample Input:
MR. Liam Brooks
The._ENGLISH_MAN

Sample Output:
Login Successful!!! Fancy a cheeky wink right ya?! 👍

___________________________
Concept:
___________________
This program demonstrates simple login validation using
if-else statement and logical AND (&&) operator.

Working:
1. User enters username and password.
2. Both conditions must be true.
3. If matched, login is successful.
4. Otherwise, invalid message is displayed.

Note:
getline() is used instead of cin >> to allow
full input including spaces.

_______________________
Advantages:
1. Simple authentication logic.
2. Demonstrates use of logical AND.
3. Beginner-friendly example of conditional statements.

Disadvantages:
1. Username and password are hardcoded.
2. Not secure for real-world applications.
3. No encryption or multiple attempts handling.
*/