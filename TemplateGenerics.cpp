#include <iostream>
using namespace std;

/*
Concept: Templates (Generic Programming)
________________________________________
Templates allow us to write a single function or class that works 
with any data type. This is incredibly useful for System Architecture 
where data types might vary dynamically.
*/

// Template Function for swapping any type of data
template <typename T>
void genericSwap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

// Template Class for a generic Data Processor
template <class T>
class DataProcessor {
private:
    T dataX;
    T dataY;

public:
    DataProcessor(T x, T y) {
        dataX = x;
        dataY = y;
    }

    T getMax() {
        return (dataX > dataY) ? dataX : dataY;
    }
    
    void display() {
        cout << "Data X: " << dataX << " | Data Y: " << dataY << endl;
    }
};

int main() {
    cout << "--- 1. Generic Function (Templates) ---" << endl;
    int x = 10, y = 99;
    cout << "Before Swap (Int): " << x << ", " << y << endl;
    genericSwap(x, y);
    cout << "After Swap (Int):  " << x << ", " << y << "\n" << endl;

    string str1 = "Voxion";
    string str2 = "Labs";
    cout << "Before Swap (String): " << str1 << ", " << str2 << endl;
    genericSwap(str1, str2);
    cout << "After Swap (String):  " << str1 << ", " << str2 << "\n" << endl;

    cout << "--- 2. Generic Class (Templates) ---" << endl;
    // Processing Integers
    DataProcessor<int> intProcessor(50, 150);
    cout << "Integer Processor -> Max Value: " << intProcessor.getMax() << endl;

    // Processing Floats
    DataProcessor<float> floatProcessor(3.14f, 2.71f);
    cout << "Float Processor   -> Max Value: " << floatProcessor.getMax() << endl;

    return 0;
}