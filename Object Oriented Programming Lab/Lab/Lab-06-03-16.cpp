#include<iostream>
using namespace std;
int main()
{
    long long int n;
    while(cin>>n)
    {
        long long int n1,n2,n3,n4;
        n1=n/10000000;
        cout<<"Year:"<<n1<<endl;
        n1=n%100000;
        n2=n1/100000;
        cout<<"Hall code:"<<n2<<endl;
        n2=n%100000;
        n3=n2/1000000;
        cout<<"Department code:"<<n3<<endl;
        n3=n%10000000;
        n4=n3/10000;
        cout<<"Student serial:"<<n4<<endl;
    }
    return 0;
}
