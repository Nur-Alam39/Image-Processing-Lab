#include<iostream>
using namespace std;
int main()
{
    int s;
    while(cin>>s)
        for(int i=1; i<=s; i++)
        {
            for(int k=i; k<=s-1; k++)cout<<" ";
            for(int j=1; j<=(2*i-1); j++)cout<<"*";
            cout<<endl;
        }
    return 0;
}

