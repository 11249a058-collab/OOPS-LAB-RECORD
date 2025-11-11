#include<iostream>
using namespace std;
class employee
{
    public:
     int empID;
     string name;
     float salary;
     void setemployee(int id,string n,float s)
     {
        empID=id;
        name=n;
        salary=s;
     }
     void displayemployee();
};
void employee::displayemployee()
{
    cout<<"employeeID:"<<empID
        <<",Name:"<<name
        <<",salary.Rs:"<<salary<<endl;
}
int main()
{
 employee e1,e2;
 e1.setemployee(101,"ravi",50000.75);
 e2.setemployee(102,"priya",62000.50);
 e1.displayemployee();
 e2.displayemployee();
 return 0;
}