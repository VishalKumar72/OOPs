#include<bits/stdc++.h>
using namespace std;

class Employee{
  private :
    int Salary;

  public :
    // data membera
    int year;
    string Name;
    

    // member function
   void setSalary(int S){
    Salary=S;
   }
   int getSalary(){
    return Salary;
   }
    
};

int main()
{
    Employee E1;
    E1.year=2022;
    E1.Name="Vishal Kumar";
    E1.setSalary(1000000);
    cout<<"Emp salary "<<E1.getSalary()<<endl;
}

//explanation of the code:
// 1. **Class Definition**:
//    - `Employee`: A class with private data member `Salary` and public data members `year` and `Name`.
// 2. **Member Functions**:   
//    - `setSalary(int S)`: Sets the value of `Salary`.
//    - `getSalary()`: Returns the value of `Salary`.
// 3. **Main Function**:
//    - An object `E1` of class `Employee` is created.
//    - The `year` and `Name` are set for the employee.
//    - The salary is set using `setSalary` and retrieved using `getSalary`, which is then printed to the console.
// 4. **Encapsulation**:
//    - The `Salary` data member is private, meaning it cannot be accessed directly from outside the class.
//    - The public member functions `setSalary` and `getSalary` provide controlled access to the private data member, demonstrating encapsulation in C++.
// 5. **Output**:
//    - The program outputs the salary of the employee, which is set to 1000000 in this case.
// This code demonstrates encapsulation in C++ by using a class to manage employee data, ensuring that sensitive information like salary is not directly accessible from outside the class.
// Encapsulation is a fundamental concept in object-oriented programming that restricts direct access to an object's data and methods, allowing controlled interaction through public interfaces. In C++, encapsulation is achieved using classes, where data members are typically declared as private and accessed through public member functions.
// This approach enhances data security, promotes modularity, and allows for easier maintenance and updates to the code.
// By encapsulating data and behavior within classes, C++ enables developers to create robust and maintainable software systems.    
// Encapsulation is a key principle of object-oriented programming that allows you to bundle data and methods that operate on that data within a single unit, typically a class. This helps in hiding the internal state of an object and only exposing a controlled interface for interaction.
// In C++, encapsulation is achieved by using access specifiers like `private`, `protected`, and `public` to control the visibility of class members. This allows you to protect sensitive data and ensure that it can only be accessed or modified through well-defined methods, promoting better data integrity and security.
// Encapsulation also enhances code maintainability by allowing changes to the internal implementation without affecting the external interface, making it easier to manage and evolve complex systems.