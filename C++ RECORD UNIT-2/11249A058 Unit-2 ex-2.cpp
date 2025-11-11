#include<iostream>
using namespace std;
class Demo
{
    int x;
    public:
      Demo(int a)
      {
        x=a;
        cout<<"Constructor called,x="<<x<<endl;
      }
      Demo()
      {
        cout<<"Destructor called for object with x="<<x<<endl;
      }
};
int main()
{
    Demo d1(5),d2(10),d3(15);
    cout<<"Objects are going out of scope..."<<endl;
    return 0;
}