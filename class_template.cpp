#include<bits/stdc++.h>
using namespace std;


template<class T>

class MyClass {

private:
    T data;
    
public:
    MyClass(T d ){
        data = d;
        
    }

    void display() {
        cout << "Data: " << data  << endl;
    }
    T getData() {
        return data;
    }
    
};
int main()
{
    MyClass<int> obj1(10);
    obj1.display(); // Outputs: Data: 10
    MyClass<string> obj2("Hello");
    obj2.display(); // Outputs: Data: Hello
    
    return 0;
}

/*
What is a Class Template?
A class template in C++ allows you to create a class that can work with any data type. 
Instead of writing separate classes for int, float, double, etc., you write one template,
 and the compiler generates the specific class for you.

Why Use Class Templates?
Reusability: Write code once, use it for any data type.
Type Safety: The compiler checks types for you.
Flexibility: Easily create classes for new types.
Syntax
template <typename T> tells the compiler this is a template.
T is a placeholder for any data type.
Example
Let’s create a simple class template for a box that can hold any type of value:

How It Works
Box<int> creates a box for integers.
Box<string> creates a box for strings.
The same class template works for both types.
Summary:
A class template lets you write generic, reusable classes that work with any data type. 
This is a powerful feature in C++ for writing flexible and efficient code.
// This code demonstrates a simple class template in C++.
// It defines a class MyClass that can hold any type of data and provides methods to display and retrieve that data.
// The main function creates instances of MyClass with different data types (int and string) and displays their contents.
// This code is a basic example of how to use class templates in C++.
// This code demonstrates a simple class template in C++.
// It defines a class MyClass that can hold any type of data and provides methods to display and retrieve that data.
// The main function creates instances of MyClass with different data types (int and string) and displays their contents.
// This code is a basic example of how to use class templates in C++.
// This code demonstrates a simple class template in C++.
// It defines a class MyClass that can hold any type of data and provides methods to display and retrieve that data.
// The main function creates instances of MyClass with different data types (int and string) and displays their contents.
// This code is a basic example of how to use class templates in C++.
// This code demonstrates a simple class template in C++.
// It defines a class MyClass that can hold any type of data and provides methods to display and retrieve that data.
// The main function creates instances of MyClass with different data types (int and string) and displays their contents.
// This code is a basic example of how to use class templates in C++.                   
// This code demonstrates a simple class template in C++.
// It defines a class MyClass that can hold any type of data and provides methods to display and retrieve that data.
*/