#include<bits/stdc++.h>
using namespace std;
class rev
{
    public:
    int rv(long int a)
    {
        int d,i=0;
        while(a!=0)
        {
            d*=10+a%10;
            a=a/10;
        }
        return d;
    }
    void rv(int x)
    {
        int d[100],i=0;
         cout<<"The number is(function without return type):";
        while(x!=0)
        {
            d[i++]=x%10;
            printf("%d",d[i]);
            x=x/10;
        }
    }
};
int main()
{
    int a,c;
    rev n;
    cout<<"Enter a number:";
    cin>>a;
    n.rv(a);
    n.rv(a);
    cout<<"\nThe revers number is(function with return type):"<<c;
    return 0;
}
