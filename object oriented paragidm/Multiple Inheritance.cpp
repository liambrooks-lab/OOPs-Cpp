#include <iostream>
using namespace std;

class LandVehicle
{
public:
    void landinfo()
    {
        cout << "This is a LandVehicle" << endl;
    }
};

class WaterVehicle
{
public:
    void waterinfo()
    {
        cout << "This is a WaterVehicle" << endl;
    }
};

class AmphibiousVehicle : public LandVehicle, public WaterVehicle
{
public:
    AmphibiousVehicle(),
    {
        cout << "This is an AmphibiousVehicle" << endl;
    }
};

int main()
{
    AmphibiousVehicle obj;
    obj.waterinfo();
    obj.landinfo();
    return 0;
}

/* -------------------- OUTPUT WILL BE: --------------------
This is an AmphibiousVehicle
This is a WaterVehicle
This is a LandVehicle
-------------------------------------------------- */

/* -------------------- CONCEPT --------------------
- This program demonstrates MULTIPLE INHERITANCE in C++.
- AmphibiousVehicle inherits from both LandVehicle and WaterVehicle.
- When an object of AmphibiousVehicle is created:
    1. Its constructor executes first.
    2. Then, functions from both base classes can be accessed.
-------------------------------------------------- */

/* -------------------- FEATURES --------------------
- Inheritance: Code reusability by deriving from multiple base classes.
- Encapsulation: Each class has its own methods (landinfo, waterinfo).
- Constructor Execution: Derived class constructor runs before base class functions.
- Real-world modeling: AmphibiousVehicle can act as both land and water vehicle.
-------------------------------------------------- */

/* -------------------- ADVANTAGES --------------------
1. Code reuse: Avoids rewriting similar functionality.
2. Flexibility: A class can inherit features from multiple classes.
3. Real-world representation: Models hybrid systems (like amphibious vehicles).
-------------------------------------------------- */

/* -------------------- DISADVANTAGES --------------------
1. Complexity: Multiple inheritance can make code harder to maintain.
2. Ambiguity: If both base classes had a method with the same name,
   the derived class would face the "Diamond Problem".
3. Tight coupling: Changes in base classes may affect derived classes unexpectedly.
4. Reduced clarity: Overuse of multiple inheritance can lead to confusing hierarchies.
-------------------------------------------------- */