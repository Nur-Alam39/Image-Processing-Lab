#include<bits/stdc++.h>
#define  size 3
using namespace std;
class vector_built
{
    int v[ size];
public:
    vector_built();
    vector_built(int *x);
    friend vector_built operator*(int a,vector_built b);
    friend vector_built operator*(vector_built b,int a);
    friend istream & operator >> (istream &,vector_built &);
    friend ostream & operator << (ostream &,vector_built &);
};
vector_built::vector_built()
{
    for(int i=0; i<size; i++)
        v[i]=0;
}
vector_built::vector_built(int *x)
{
    for(int i=0; i<size; i++)
        v[i]=x[i];
}
vector_built operator*(int a,vector_built b)
{
    vector_built c;
    for(int i=0; i<size; i++)
        c.v[i]=a*b.v[i];
    return c;
}
vector_built operator*(vector_built b,int a)
{
    vector_built c;
    for(int i=0; i<size; i++)
        c.v[i]=b.v[i]*a;
    return c;
}
istream & operator >> (istream &din,vector_built &b)
{
    for(int i=0; i<size; i++)
        din>>b.v[i];
    return (din);
}
ostream & operator << (ostream &dout,vector_built &b)
{
    dout<<"(";
    for(int i=0; i<size; i++)
    {
        dout<<b.v[i];
        if(i<2)
            dout<<",";
    }
    dout<<")"<<endl;
    return (dout);
}
int main()
{
    int a[size]= {2,4,6},b[size]= {1,3,5};
    vector_built m,n,p,q;
    m=a;
    n=b;
    p=2*m;
    q=n*2;
    cout<<"p="<<p<<"q="<<q;
    return 0;
}

