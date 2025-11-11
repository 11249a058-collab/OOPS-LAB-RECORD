#include<iostream>
using namespace std;
class student
{
    int roll;
    static int count;
    public:
     student(int r)
     {
        roll=r;
        count++;
     }
     static void showcount()
     {
        cout<<"Total students:"<<count<<endl;
     }
};
int student::count=0;
int main()
{
    student s1(1),s2(2),s3(3);
    student::showcount();
    return 0;
}