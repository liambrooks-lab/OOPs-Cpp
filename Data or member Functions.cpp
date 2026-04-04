#include <iostream>
using namespace std;

class Student
{
private:
    int Roll_No;
    string Student_Name;
    string Class;

public:
    void acceptInfo()
    {
        cout << "Enter Roll Number: ";
        cin >> Roll_No;

        cin.ignore();

        cout << "Enter Student Name: ";
        getline(cin, Student_Name);

        cout << "Enter Class: ";
        getline(cin, Class);
    }

    void displayInfo()
    {
        cout << "\nStudent Details:\n";
        cout << "Roll Number: " << Roll_No << endl;
        cout << "Student Name: " << Student_Name << endl;
        cout << "Class: " << Class << endl;
    }
};

int main()
{
    Student student;
    student.acceptInfo();
    student.displayInfo();
    return 0;
}

/*
Output will be:
_________________________
Sample Input:
Enter Roll Number: 101
Enter Student Name: Rudra Sharma
Enter Class: B.Tech CSE

Sample Output:
Student Details:
Roll Number: 101
Student Name: Rudra Sharma
Class: B.Tech CSE

________________________________
Concept:
____________________
This program demonstrates a simple class in C++.
A class contains data members (variables) and member functions.

Data Hiding:
Private members cannot be accessed directly outside the class.
They are accessed using public member functions.
_______________________
Advantages:
1. Organizes data and functions together.
2. Provides data security using private access.
3. Improves code structure using OOP concept.
*/