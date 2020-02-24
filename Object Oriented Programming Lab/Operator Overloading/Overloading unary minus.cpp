#include<bits/stdc++.h>
using namespace std;
class data
{
    int x,y,z;
public:
    void getdata(int a,int b,int c);
    void dis play();
    void operator -();
};
void data::getdata(int a,int b,int c)
{
    x=a;
    y=b;
    z=c;
}
void data::display()
{
    cout<<"x="<<x<<endl<<"y="<<y<<endl<<"z="<<z<<endl;
}
void data::operator-()
{
    x=-x;
    y=-y;
    z=-z;
}
int main()
{
    data d;
    d.getdata(10,-5,-9);
    cout<<"d:"<<endl;
    d.display();
    -d;
    cout<<"-d:"<<endl;
    d.display();
    return 0;
}

