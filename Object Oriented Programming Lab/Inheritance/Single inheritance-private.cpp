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
class D:private B
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
    get_ab();
    c=a*get_b();
}
void D::display()
{
    cout<<"a="<<a<<endl;
    show_b();
    cout<<"c="<<c<<endl;
}
int main()
{
    D d;
    d.multiply();
    d.display();
    return 0;
}

