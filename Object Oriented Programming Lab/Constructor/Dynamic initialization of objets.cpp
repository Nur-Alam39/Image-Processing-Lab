#include<bits/stdc++.h>
using namespace std;
class integer
{
    float m,n;
public:
    integer()
    {
        cout<<"Default constructor is called."<<endl;
    }
    integer(int x,int y)
    {
        cout<<"Constructor(int x,int y) is called."<<endl;
        m=x;
        n=y;
    }
    integer(int x,float y)
    {
        cout<<"Constructor(float x,int y) is called."<<endl;
        m=x;integer(float x,int y)
    {
        cout<<"Constructor(float x,int y) is called."<<endl;
        m=x;
        n=y;
    }
        n=y;
    }
    integer(float x,float y)
    {
        cout<<"Constructor(float x,float y) is called."<<endl;
        m=x;
        n=y;
    }
    integer(float x,int y=5)
    {
        cout<<"Constructor(float x,int y=5) is called."<<endl;
        m=x;
        n=y;
    }
    void display()
    {
        cout<<"m="<<m<<" n="<<n<<endl;
    }
};
int main()
{
    float a,b;
    int x,y;
    integer int1;
    for(int i=0; i<4; i++)
    {
        cout<<"Enter value of x & y in integer type:";
        cin>>x>>y;
        int1=integer(x,y);
        int1.display();
        cout<<"Enter value of a & b in float type:";
        cin>>a>>b;
        int1=integer(a,b);
        int1.display();
        cout<<"Enter value of a in integer type:";
        cin>>a;
        int1=integer(a);
        int1.display();
    }
    return 0;
}

