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
