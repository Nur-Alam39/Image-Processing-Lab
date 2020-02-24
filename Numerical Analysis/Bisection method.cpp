#include<bits/stdc++.h>
using namespace std;
float f(float x)
{
    return (pow(x,2)-(4*x)-10);
}
int main()
{
    float x1,x2,x3;
    cout<<"Initialization,\nEnter x1 = ";
    cin>>x1;
    cout <<"Enter x2 = ";
    cin>>x2;
    cout<<"\n______________________________________________________________________________\n";
    cout<<"\nItr No.   x1\t   x2\t      x3\t  f(x1)\t   f(x2)\t   f(x3)";
    cout<<"\n______________________________________________________________________________\n";
    int i=1;
    while(1)
    {
        x3=(x1 + x2)/2.0;
        cout<<i++<<"."<<setw(12)<<x1<<setw(12)<<x2<<setw(12)<<x3<<setw(12)<<f(x1)<<setw(12)<<f(x2)<<setw(12)<<f(x3)<<endl<<endl;
        if(f(x1)*f(x3)<0)
            x2=x3;
        else
            x1=x3;
        if(fabs(x2 - x1)<0.0001)
            break;
    }
    printf("Root=%.6f\n",x3);
    return 0;
}
