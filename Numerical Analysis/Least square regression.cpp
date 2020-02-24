#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    float b,a,ny,sum_x=0,sum_y=0,sum_sqr_x=0,sum_xy=0;;
    cout<<"Enter number of data = ";
    cin>>n;
    int x[n],y[n];
    cout<<"Enter the values of x :";
    for(int i=0; i<n; i++)
        cin>>x[i];
    cout<<"Enter the values of y :";
    for(int i=0; i<n; i++)
        cin>>y[i];
    for(int i=0; i<n; i++)
    {
        sum_x+=x[i];
        sum_y+=y[i];
        sum_sqr_x+=x[i]*x[i];
        sum_xy+=x[i]*y[i];
    }
    //printf("s_x = %d\ns_y = %d\nsq_x = %d\ns_xy = %d\n",sum_x,sum_y,sum_sqr_x,sum_xy);
    b=((n*sum_xy)-(sum_x*sum_y))/((n*sum_sqr_x)-(sum_x*sum_x));
    a=((sum_y/n)-(b*(sum_x/n)));
    cout<<"Here,a = "<<a<<"\nb = "<<b<<endl;
    int nx;
    cout<<"Enter non-tabular value of x = ";
    cin>>nx;
    ny=a+b*nx;
    cout<<"\nAt point x = "<<nx<<" the value of y = "<<ny<<endl;
    return 0;
}
