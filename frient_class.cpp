#include<bits/stdc++.h>
using namespace std;

class B;
class A {
    private:
        int x=123;
    public:
        A(int i) {
            x=i;
        }
        friend class B; // B is a friend of A
};
class B {
    public:
        void show(A a) {
            cout << "Value of x in A: " << a.x << endl; // Accessing private member x of A
        }
};
int main(){
    A a(4); // Create an object of A with x initialized to 456
    B b; // Create an object of B
    b.show(a); // B accesses the private member x of A
    return 0;
}