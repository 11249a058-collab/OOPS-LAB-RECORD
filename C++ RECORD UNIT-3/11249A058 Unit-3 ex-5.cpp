#include<iostream>
using namespace std;
class number
{
    int value;
    public:
     number(int v=0):value(v){}
     number operator+(number obj)
     {
        number temp;
        temp.value=value+obj.value;
        return temp;
     }
     void display()
     {
        cout<<value<<endl;
     }
};
int main()
{
    number n1(10),n2(20),n3;
    n3=n1+n2;
    cout<<"Result:";
    n3.display();
    return 0;
}