#include<bits/stdc++.h>
using namespace std;

class Print{
    public:

        void show(int x){
            cout<<"Integer value "<<x<<" "<<endl;
        }
        void show(string x)
        {
            cout<<"String Value "<<x<<endl;
        }
        void show(double x)
        {
            cout<<"Double value "<<x<<endl;
        }
};

int main()
{
    Print A;
    A.show(10);
    A.show("Vishal Kumar");
    A.show(10.10);
    return 0;

}