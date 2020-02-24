#include<bits/stdc++.h>
using namespace std;
class alpha
{
    int x;
public:
    alpha(int i)
    {
        x=i;
        cout<<"[alpha]:x is initialized\n";
    }
    void show_x()
    {
        cout<<"x="<<x<<endl;
    }
};
class beta
{
    int p,q;
public:
    beta(int a,int b):p(a),q(p+b)
    {
        cout<<"[beta]:p & q are initialized"<<endl;
    }
    void show_pq()
    {
        cout<<"p="<<p<<endl<<"q="<<q<<endl;
    }
};
class gamma:public alpha,public beta
{
    int m,n;
public:
    gamma(int a,int b,int c,int d,int e):m(a),n(b),alpha(c),beta(d,e)
    {
        cout<<"[gamaa]:m & n initialized"<<endl;
    }
    void show_mn()
    {
        cout<<"m="<<m<<endl<<"n="<<n<<endl;
    }
};
int main()
{
    gamma g(1,2,3,4,5);
    g.show_x();
    g.show_pq();
    g.show_mn();

    return 0;
}

