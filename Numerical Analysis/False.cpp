#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return (x*x-4*x-10);
}
int main()
{
    double x1,x2,x3;
    cin>>x1>>x2;
    int i=1;
    while(fabs(x2-x1)>=0.000000001)
    {
        i++;
        x3=((x1*f(x2)-x2*f(x1))/(f(x2)-f(x1)));
        if(f(x1)*f(x3)<0)
            x2=x3;
        else
            x1=x3;
            cout<<i<<endl;
    }
    printf("Iteration = %d\nRoot = %.6lf\n",i,x3);
    return 0;
}
