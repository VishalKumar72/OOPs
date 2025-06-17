#include<bits/stdc++.h>
using namespace std;
 
class Animal{
    private:

    public:

     void eat()
     {
        cout<<"Animal eat :: "<<endl;
     }
};

class Dog : public Animal{
    public:
     void Bark()
     {
        cout<<" Dog's Bark "<<endl;
     }
};
class bitch : public Animal,public Dog{
    public:
        void Reproduce()
        {
            cout<<"Bitch can Reproduce child "<<endl;
        }
};
int main()
{
     Dog d1;
     d1.eat();
    //  d1.Bark();
     cout<<"Bitch:: -> "<<endl;
     bitch b1;
     b1.eat();
    //  b1.Bark();
     b1.Reproduce();

}