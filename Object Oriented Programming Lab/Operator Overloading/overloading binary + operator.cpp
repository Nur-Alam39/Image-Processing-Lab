#include<bits/stdc++.h>
using namespace std;
class complexy
{
    float x,y;
public:
    complexy(float real,float imaginary)
    {
        x=real;
        y=imaginary;
    }
    complexy operator+(complexy);
    void display();
};
complexy complexy::operator+(complexy c)
{
    return complexy((x+c.x),(y+c.y));
}
void complexy::display()
{
    cout<<x<<"+"<<y<<"i"<<endl;
}
int main()
{
    complexy c1(1.5,2.6),c2(2.6,3.5);
    complexy c3=c1+c2;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}

