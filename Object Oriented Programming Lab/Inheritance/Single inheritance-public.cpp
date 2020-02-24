#include<bits/stdc++.h>
using namespace std;
class B
{
    int b;
public:
    int a;
    void get_ab();
    int get_b();
    void show_b();
};
class D:public B
{
    int c;
public:
    void multiply();
    void display();

};
void B::get_ab()
{
    cout<<"Enter value of a & b:"<<endl<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
}
int B::get_b()
{
    return b;
}
void B::show_b()
{
    cout<<"b="<<b<<endl;
}
void D::multiply()
{
    c=a*get_b();
}
void D::display()
{
    cout<<"a="<<a<<endl<<"b="<<get_b()<<endl<<"c="<<c<<endl;
}
int main()
{
    D d;
    d.get_ab();
    d.show_b();
    d.multiply();
    d.display();
    return 0;
}

