#include<bits/stdc++.h>
using namespace std;
class doing
{
    int a,b;
public:
    void call_ref(int &a,int &b)
    {
        int temp;
        temp=a;
        a=b;
        b=temp;
    }
    void call_value(int a,int b)
    {
        int x;
        x=a;
        a=b;
        b=x;
        cout<<"After swapping(call by value):"<<"a="<<a<<"  b="<<b<<endl;
    }
};
int main()
{
    int a,b,c;
    doing m;
    while(1)
    {
        cout<<"Enter two number:";
        cin>>a>>b;
        cout<<"1.Swap "<<a<< " and "<<b<<" [call by value]"<<endl;
        cout<<"2.Swap "<<a<< " and "<<b<<" [call by reference]"<<endl;
        cout<<"Choose:";
        cin>>c;
        switch(c)
        {
        case 1:
            cout<<"Before swapping:"<<"a="<<a<<"  b="<<b<<endl;
            m.call_value(a,b);
            cout<<"After call by value in main function:"<<"a="<<a<<"  b="<<b<<endl<<endl;
            break;
        case 2:
            cout<<"Before swapping:"<<"a="<<a<<"  b="<<b<<endl;
            cout<<"Before call by reference in main function:"<<"a="<<a<<"  b="<<b<<endl;
            m.call_ref(a,b);
            cout<<"After swapping(call by reference):"<<"a="<<a<<"  b="<<b<<endl;
            cout<<"After call by reference in main function:"<<"a="<<a<<"  b="<<b<<endl<<endl;
            break;
        }
    }
    return 0;
}
