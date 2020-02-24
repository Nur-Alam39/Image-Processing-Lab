#include<bits/stdc++.h>
using namespace std;
class A
{
protected:
    int a;
    public:
        void display(int x)
        {
            a=x;
            cout<<"a="<<a<<endl;
        }
};
class B
{
protected:
    int b;
public:
    void display(int x)
    {
        b=x;
        cout<<"b="<<b<<endl;
    }
};
class C:public A,public B
{
public:
    void display1()
    {
        A::display(11);
        B::display(13);
    }
};
int main()
{
    C c;
    c.A::display(4);
    c.B::display(5);
    c.display1();
    return 0;
}

