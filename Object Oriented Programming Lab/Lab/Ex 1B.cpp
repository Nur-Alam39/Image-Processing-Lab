#include<iostream>
using namespace std;
int main()
{
    int vote,a=0,b=0,c=0,d=0,e=0,x=0,t=1;
    cout<<"Give votes : "<<endl;
    cin>>vote;
    do
    {
        switch(vote)
        {
        case 1:
            a++;
            break;
        case 2:
            b++;
            break;
        case 3:
            c++;
            break;
        case 4:
            d++;
            break;
        case 5:
            e++;
            break;
        default :
            x++;
            break;
        }
        cin>>vote;
        t++;
    }
    while(vote>0);
    if(a>b&&a>c&&a>d&&a>e)
        cout<<"1st candidate wins.S/He got "<<a<<" votes"<<endl;
    else if(b>a&&b>c&&b>d&&b>e)
        cout<<"2nd candidate wins.S/He got "<<b<<" votes"<<endl;
    else if(c>b&&c>a&&c>d&&c>e)
        cout<<"3rd candidate wins.S/He got "<<c<<" votes"<<endl;
    else if(d>b&&d>c&&d>a&&d>e)
        cout<<"4th candidate wins.S/He got "<<d<<" votes"<<endl;
    else if(e>b&&e>c&&e>d&&e>a)
        cout<<"5th candidate wins.S/He got "<<e<<" votes"<<endl;
    cout<<"Total given votes:"<<t<<endl<<"Lost votes:"<<x<<endl;
    return 0;
}
