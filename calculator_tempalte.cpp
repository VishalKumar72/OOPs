#include<bits/stdc++.h>
using namespace std;

// writing class template for calculator
template<typename T>
class Calculator {
    private:
    T data1,data2; // This is just a placeholder, not used in this example

public:
  // Constructor to initialize data members (if needed)
    Calculator(T d1, T d2){
        data1 = d1;
        data2 = d2;
    }


    // Function to add two numbers
    T add(T a, T b) {
        return a + b;
    }

    // Function to subtract two numbers
    T subtract(T a, T b) {
        return a - b;
    }

    // Function to multiply two numbers
    T multiply(T a, T b) {
        return a * b;
    }

    // Function to divide two numbers
    T divide(T a, T b) {
        if (b == 0) {
            throw invalid_argument("Division by zero is not allowed.");
        }
        return a / b;
    }

    void display() {
        cout << "Calculator ready to perform operations." << endl;
        cout << "Data1: " << data1 << ", Data2: " << data2 << endl;
        cout << "Addition: " << add(data1, data2) << endl;
        cout << "Subtraction: " << subtract(data1, data2) << endl;
        cout << "Multiplication: " << multiply(data1, data2) << endl;
        cout << "Division: " << divide(data1, data2) << endl;
        
    }
};

int main() {
    // Create a Calculator object for integers
    Calculator<int> intCalc(10, 5);
    cout << "Integer Calculator:" << endl;
    intCalc.display();
    cout << endl;
    // Create a Calculator object for floats
    Calculator<float> floatCalc(10.5, 5.2);
    cout << "Float Calculator:" << endl;
    floatCalc.display();
    cout << endl;   
    // Create a Calculator object for strings

    Calculator<string> stringCalc("Hello, ", "World!");
    cout << "String Calculator:" << endl;
    cout << "Concatenation: " << stringCalc.add("Hello, ", "World!") << endl;
    cout << endl;

    return 0;
}
