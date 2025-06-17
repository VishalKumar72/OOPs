#include<bits/stdc++.h>
using namespace std;

class car {
    public:
        car() {
            cout << "Default constructor called" << endl;
        }
        car(int x) {
            cout << "Parameterized constructor called with value: " << x << endl;
        }
        
        
};
class student {
    public:
        string name;
        int roll_no;

          student(string name ,int x) {
            this->name = name;
            this->roll_no = x;
            cout << "Parameterized constructor of student called with name: "<<name<<" and roll no is " << x << endl;
        }
        student(const student &s) {
            name = s.name;
            roll_no = s.roll_no;
            cout << "Copy constructor called for student with name: " << s.name << " and roll no: " << roll_no << endl;
            
        }
        // // Destructor for student class it will be called when the object goes out of scope  and memory is freed.
        // ~student() {
        //     cout << "Destructor called for student with name: "  << endl;
        // }
        

      
        void display() {
            cout << "Name: " << name << ", Roll No: " << roll_no << endl;
        }
};

int main()
{
    car c1; // Default constructor is called here
    student s1("Reethu",880861); // Parameterized constructor is called here
    student s2(s1); // Copy constructor is called here
    s2.display(); // Displaying the copied student's details
    delete &s2; // This line is incorrect, as it tries to delete a non-pointer object. It should be removed or corrected.   
    return 0;
}

// eplanation of the code:
// 1. **Class Definitions**:
//    - `car`: A class with a default constructor and a parameterized constructor.
//    - `student`: A class with a parameterized constructor, a copy constructor, and a method to display student details.
// 2. **Constructors**:
//    - The default constructor of `car` prints a message when an object is created without parameters.
//    - The parameterized constructor of `car` takes an integer and prints a message with that value.       
