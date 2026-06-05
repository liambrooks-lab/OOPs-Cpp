#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() { cout << "This is a Vehicle" << endl; }
};

class Car : public Vehicle {
public:
    Car() { cout << "This Vehicle is Car" << endl; }
};

int main() {
    Car obj;
    return 0;
}

/*
Output will be:
____________________________
This is a Vehicle
This Vehicle is Car
_________________________
Concept:
______________________________
- This program demonstrates **Inheritance in C++**.
- The class `Car` inherits from the base class `Vehicle`.
- When an object of `Car` is created, the constructor of the base class (`Vehicle`) is called first, followed by the constructor of the derived class (`Car`).
_______________________________________________ 
Advantages of Inheritance:
1. Promotes code reusability (common features in base class can be reused in derived classes).
2. Improves maintainability (changes in base class automatically reflect in derived classes).
3. Supports hierarchical classification (natural modeling of real-world relationships).

Disadvantages of Inheritance:
1. Increases coupling between base and derived classes (changes in base may unintentionally affect derived classes).
2. Can make code more complex and harder to debug if overused.
3. May lead to misuse (e.g., inappropriate inheritance instead of composition).
*/