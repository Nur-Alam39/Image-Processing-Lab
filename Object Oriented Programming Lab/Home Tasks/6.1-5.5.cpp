#include<iostream>
using namespace std;
class DM;
class DB
{
    float f_i;
public:
    DB();///constructor deceleration
    float made_inch(float);
    friend void add(DB a,DM b,int);
};
class DM
{
    float m_c;
public:
    DM();///constructor deceleration
    float made_cm(float);
    friend void add(DB a,DM b,int);
};
float DB::made_inch(float x)
{
    float rel,other,inches;
    int itg,itg2;
    itg=x;
    rel=x;
    itg2=itg*12;
    other=rel-itg;
    inches=itg2+other;
    return inches;
}
float DM::made_cm(float x)
{
    float rel,other,cm;
    int itg,itg2;
    itg=x;
    rel=x;
    itg2=itg*100;
    other=rel-itg;
    cm=itg2+other;
    return cm;
}
void add(DB a,DM b,int c)
{
    float inch,cm;
    if(c==1)
    {
        inch=a.made_inch(a.f_i);
        cm=inch*2.54;
        cm=cm+b.made_cm(b.m_c);
        cm/=100;
        cout<<"Distance: "<<cm<<" m"<<endl;
    }
    else if(c==2)
    {
        cm=b.made_cm(b.m_c);
        inch=cm/2.54;
        inch=inch+a.made_inch(a.f_i);
        inch/=12;
        cout<<"Distance: "<<inch<<" ft"<<endl;
    }
}
DB::DB()
{
    cout<<"Enter distance in foot-inches:";
    cin>>f_i;
}
DM::DM()
{
    cout<<"Enter distance in meter-centimeter:";
    cin>>m_c;
}
int main()
{
    DB m;
    DM n;
    int c;
    cout<<"Add data:"<<endl<<"1.In meter-centimeter"<<endl<<"2.In foot-inches"<<endl<<"Choose:";
    cin>>c;
    add(m,n,c);
    return 0;
}

