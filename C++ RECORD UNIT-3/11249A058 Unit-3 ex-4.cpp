#include<iostream>
using namespace std;
class counter
{
    private:
     int count;
    public:
     counter(int c=0):count(c){}
     void display() const
     {
        std::cout<<"Count:"<<count<<std::endl;
     }
     counter operator++(int)
     {
        counter temp(*this);
        return temp;
     }
};
int main()
{
    counter c1(10);
    counter c2;
    std::cout<<"Initial c1:";
    c1.display();
    c2=c1++;
    std::cout<<"After c2=c1++:"<<std::endl;
    std::cout<<"c1(Incremented):",c1.display();
    std::cout<<"c2(Old value):",c2.display();
    return 0;
}