#include<iostream>
using namespace std;
class number
{
    int x;
    public:
     number(int a)
     {
        x=a;
     }
     void operator-()
     {
        x=-x;
     }
     void display()
     {
        cout<<"Value of x:"<<x<<endl;
     }
};
int main()
{
    number n1(10);
    cout<<"Before overloading:"<<endl;
    n1.display();
    -n1;
    cout<<"After overloading:"<<endl;
    n1.display();
    return 0;
}
