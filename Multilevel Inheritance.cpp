#include <iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a Vehicle" << endl;
    }
};

// Derived class from Vehicle
class FourWheeler : public Vehicle
{
public:
    FourWheeler()
    {
        cout << "4 Wheeler Vehicles" << endl;
    }
};

// Derived class from FourWheeler
class Car : public FourWheeler
{
public:
    Car()
    {
        cout << "This 4 Wheeler Vehicle is a Car" << endl;
    }
};

int main()
{
    Car obj;
    return 0;
}

/* -------------------- OUTPUT --------------------
This is a Vehicle
4 Wheeler Vehicles
This 4 Wheeler Vehicle is a Car
-------------------------------------------------- */

/* -------------------- CONCEPT --------------------
- This program demonstrates MULTILEVEL INHERITANCE in C++.
- Vehicle → FourWheeler → Car (a chain of inheritance).
- When an object of Car is created:
    1. First, the constructor of Vehicle (base class) executes.
    2. Then, the constructor of FourWheeler executes.
    3. Finally, the constructor of Car executes.
-------------------------------------------------- */

/* -------------------- FEATURES --------------------
- Multilevel inheritance: A derived class becomes the base class for another class.
- Constructor chaining: Base class constructors are called before derived class constructors.
- Real-world modeling: Car is a type of FourWheeler, which itself is a type of Vehicle.
- Code reusability: Each class builds upon the previous one.
-------------------------------------------------- */

/* -------------------- ADVANTAGES --------------------
1. Clear hierarchy: Represents "is-a" relationships (Car is a FourWheeler, FourWheeler is a Vehicle).
2. Code reuse: Common properties can be defined in base classes and reused in derived classes.
3. Extensibility: Easy to add more levels (e.g., SportsCar derived from Car).
4. Logical structure: Models real-world inheritance naturally.
-------------------------------------------------- */

/* -------------------- DISADVANTAGES --------------------
1. Increased complexity: Too many levels can make code harder to follow.
2. Tight coupling: Changes in base classes affect all derived classes.
3. Reduced flexibility: Deep hierarchies may limit design choices.
4. Maintenance issues: Debugging can be harder with multiple levels of inheritance.
-------------------------------------------------- */