#include<bits/stdc++.h>
using namespace std;    

class A
{
   private:
    int length;

    public:
    A(){
        length = 0;
    }

    friend void updateLength(A &a, int newLength); // Declare friend function
};

void updateLength( A &a, int newLength) {
    // Accessing private member 'length' of class A
    a.length = newLength;
    cout<<a.length<<endl; // Output the updated length
}

int main()
{
    A a;
    updateLength(a, 10); // Call the friend function to update length

    return 0;
}