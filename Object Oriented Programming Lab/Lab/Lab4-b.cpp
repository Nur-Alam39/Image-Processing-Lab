#include<iostream>
using namespace std;
long long int fact(int n)
{
    int dig[100],i=0;
    while(n!=0)
    {
        mod[i++]=n%10;
        n=n/n;
    }
}
int main()
{
    int a;
    long long int c;
    cout<<"Enter a number:";
    cin>>a;
    c=fact(a);
    cout<<"The factorial of "<<a<<" is:"<<c;
    return 0;
}
