#include<bits/stdc++.h>
using namespace std;

template<typename T>

T add(T a, T b) {
    return a + b;
}

int main()
{
    cout << "Integer addition: " << add<int>(3,4) << endl; // Outputs 15
    cout << "Double addition: " << add<double>(5.5, 10.2) << endl; // Outputs 15.7
    cout << "String concatenation: " << add<string>("Hello, ", "World!") << endl; // Outputs Hello, World!

    return 0;
}