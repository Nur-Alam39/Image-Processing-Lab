#include<bits/stdc++.h>
using namespace std;
class Time
{
    int hrs,mins;
public:
    Time(){}
    Time(int t)
    {
        mins=t%60;
        hrs=t/60;
    }
    void display()
    {
        cout<<hrs<<" hour "<<mins<<" minutes"<<endl;
    }
};
int main()
{
    Time T1;
    int duration=86;
    T1=duration;
    T1.display();
    return 0;
}

