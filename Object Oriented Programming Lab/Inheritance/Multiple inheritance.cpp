#include<bits/stdc++.h>
using namespace std;
class N
{
protected:
    int a;
public:
    void get_a(int);
};
void N::get_a(int x)
{
    a=x;
}
class M
{
protected:
    int b;
public:
    void  get_b(int );
};
void M::get_b(int y)
{
    b=y;
}
class ADD:public M,public N
{
protected:
    int c;
public:
    int add();
    void display();
};
int ADD::add()
{
    c=a+b;
    return c;
}
void ADD::display()
{
    cout<<"a="<<a<<endl<<"b="<<b<<endl<<"a+b="<<add();
}
int main()
{
    ADD addition;
    addition.get_a(10);
    addition.get_b(20);
    addition.display();
    return 0;
}

