#include<bits/stdc++.h>
using namespace std;
class complexy
{
    float x,y;
public:
    complexy(){}
    complexy(float m)
    {
        x=y=m;
    }
    complexy(float r,float i)
    {
        x=r;
        y=i;
    }
    friend complexy sum(complexy a,complexy b);
    friend void display(complexy c);
};
complexy sum(complexy a,complexy b)
{
    complexy c;
    c.x=a.x+b.x;
    c.y=a.y+b.y;
    return c;
}
void display(complexy c)
{
    cout<<c.x<<"+"<<c.y<<"i"<<endl;
}
int main()
{
    complexy a(2.1,5.6),b(3.4),c;
    c=sum(a,b);
    cout<<"a=";display(a);
    cout<<"b=";display(b);
    cout<<"c=";display(c);
    return 0;
}

