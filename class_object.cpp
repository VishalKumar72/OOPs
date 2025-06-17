#include<bits/stdc++.h>
using namespace std;

class vehicle{
  public :
    // data member
    int year;
    string color;
    string company;

    // member function
    void vehicleInfo()
    {
        cout<<color<<"  "<< company <<"  "<< year<<endl;
    }
    
};

int main()
{
    vehicle car;
    car.year=2024;
    car.color="Blue";
    car.company="Tata Motor";
    car.vehicleInfo();
}
