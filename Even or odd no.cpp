#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a Number: ";
    cin >> a;

    if (a % 2 == 0) {
        cout << "The number " << a << " is even.";
    } else {
        cout << "The number " << a << " is odd.";
    }

    return 0;
}