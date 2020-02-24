#include<bits/stdc++.h>
using namespace std;
class student_info
{
protected:
    string name;
    long int roll;
public:
    void get_name(string);
    void get_roll(long int);
    void display_info();
};
void student_info::get_name(string n)
{
    name=n;
}
void student_info::get_roll(long int r)
{
    roll=r;
}
void student_info::display_info()
{
    cout<<"Name:"<<name<<endl<<"Roll:"<<roll<<endl;
}
class test:public student_info
{
protected:
    float s1,s2;
public:
    void get_mark(float a,float b)
    {
        s1=a;
        s2=b;
    }
    void display()
    {
        cout<<"Mark obtained in 1st subject:"<<s1<<endl<<"Mark obtained in 2nd subject:"<<s2<<endl;
    }
};
class sports_result
{
    int s;
public:
    void get_s(int a)
    {
        s=a;
    }
    int show_s()
    {
        return s;
    }
    void display()
    {
        cout<<"Position in 400 meter race:"<<show_s()<<endl;
    }
};
class final_result:public test,public sports_result
{
    float total;
public:
    void display();
};
void final_result::display()
{
    total=s1+s2;
    display_info();
    test::display();
    cout<<"Total marks in test:"<<total<<endl;
    sports_result::display();
}
int main()
{
    final_result f;
    f.get_name("Abdullah");
    f.get_roll(120122);
    f.get_mark(88,78.6);
    f.get_s(2);
    f.display();
    return 0;
}
