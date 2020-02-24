#include<bits/stdc++.h>
using namespace std;
class string_built
{
    char*p;
    int len;
public:
    string_built()
    {
        len=0;
        p=0;
    }
    string_built(const char*s);
    string_built(const string_built &s);
    ~string_built()
    {
        delete p;
    }
    friend string_built operator+(const string_built &s,const string_built &t);
    friend int operator<=(const string_built &s,const string_built &t);
    friend void display(const string_built s);
};
string_built::string_built(const char*s)
{
    len=strlen(s);
    p=new char[len+1];
    strcpy(p,s);
}
string_built ::string_built(const string_built &s)
{
    len=s.len;
    p=new char[len+1];
    strcpy(p,s.p);
}
string_built operator+(const string_built &s,const string_built &t)
{
    string_built temp;
    temp.len=s.len+t.len;
    temp.p=new char[temp.len+1];
    strcpy(temp.p,s.p);
    strcat(temp.p,t.p);
    return (temp);
}
int operator <= (const string_built &s,const string_built &t)
{
    int m=strlen(s.p);
    int n=strlen(t.p);
    if(m<=n)
        return 1;
    else
        return 0;
}
void display(const string_built s)
{
    cout<<s.p;
}
int main()
{
    string_built s1="Nur";
    string_built s2="Alam";
    string_built string1,string2,string3;
    string1=s1;
    string2=s2;
    string3 = s1+s2;
    cout<<"string 1=";
    display(string1);
    cout<<"\n";
    cout<<"string 2=";
    display(string2);
    cout<<"\n";
    cout<<"string(1+2)=";
    display(string3);
    cout<<"\n";
    if(string1<=string3)
    {
        display(string1);
        cout<<" is smaller than ";
        display(string3);
    }
    else
    {
        display(string3);
        cout<<" is smaller than ";
        display(string1);
    }
    return 0;
}

