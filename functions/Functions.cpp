#include <iostream>
using namespace std;

// 1. Function Declaration (Prototype)
int add(int a, int b);

int main() {
    int x = 10, y = 20, sum;

    // 3. Function Calling
    sum = add(x, y);

    cout << "Sum is: " << sum << endl; // Output: Sum is: 30
    return 0;
}

// 2. Function Definition
int add(int a, int b) {
    return a + b;
}