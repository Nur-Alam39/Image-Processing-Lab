#include<bits/stdc++.h>
using namespace std;
class ID_NO
{
    int id;
public:
    ID_NO()
    {
        cout<<"Default constructor is called."<<endl;
    }
    ID_NO(int a)
    {
        cout<<"Simple constructor is called."<<endl;
        id=a;
    }
    ID_NO(ID_NO &c)
    {
        cout<<"Copy constructor is called."<<endl;
        id=c.id;
    }
    void d()
    {
        cout<<id<<endl;
    }
};
int main()
{
    ID_NO a(120122),d;
    a.d();
    ID_NO b(a);
    b.d();
    ID_NO c=a;
    c.d();
    d=a;
    d.d();
    return 0;
}

