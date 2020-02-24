#include<bits/stdc++.h>
using namespace std;
class A
{
    int x;
public:
    A(int a)
    {
        x=a;
        cout<<"x initialized"<<endl;
    }
    void show_x()
    {
        cout<<"Value of x="<<x<<endl;
    }
};
class B
{
    int y;
public:
    B(char a)
    {
        y=a;
        cout<<"y initialized"<<endl;
    }
    void show_y()
    {
        cout<<"Value of y="<<y<<endl;
    }
};
class C:public B,public A
{
    int z;
public:
    C(int a,char b,int c):B(c),A(c),z(a)
    {
        cout<<"z initialized"<<endl;
    }
    void show_z()
    {
        cout<<"Value of z="<<z<<endl;
    }
};
int main()
{
    C c(4,'A',3);
    c.show_x();
    c.show_y();
    c.show_z();
    return 0;
}

