#include<iostream>
using namespace std;
int main()
{
    string name;
    int unit;
    float tc;
    cout<<"Enter user name:";
    cin>>name;
    cout<<"Enter used unit:";
    cin>>unit;
    if(unit<=100)
    {
        tc=unit*60/100;

    }
    else if(unit<=300&&unit>100)
    {
        tc=100*60/100;
        tc=tc+(unit-100)*80/100;
    }
    else if(unit>300)
    {
        tc=100*60/100+200*80/100;
    }
    if(tc<50)
        tc=50;
    if(tc>300)
        tc=tc*1.15;
    cout<<"User :"<<name<<endl<<"Total cost:"<<tc<<endl;
    return 0;
}
