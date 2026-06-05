#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    int roll;
    char name[50];
    float marks;

    void input() {
        cout << "Enter Roll Number: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\nRoll Number: " << roll;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks << endl;
    }
};

int main() {
    Student s;
    int choice;

    do {
        cout << "\n--- Student Record Menu ---";
        cout << "\n1. Add Record";
        cout << "\n2. Display Records";
        cout << "\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1) {
            ofstream file("students.dat", ios::binary | ios::app);
            s.input();
            file.write((char*)&s, sizeof(s));
            file.close();
            cout << "Record added successfully!\n";
        }
        else if (choice == 2) {
            ifstream file("students.dat", ios::binary);
            while (file.read((char*)&s, sizeof(s))) {
                s.display();
                cout << "---\n";
            }
            file.close();
        }
    } while (choice != 3);

    return 0;
}