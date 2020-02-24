#include<bits/stdc++.h>
using namespace std;
class student
{
protected:
    long int roll;
public:
    void get_roll(long int);
    void show_roll();
};
void student::get_roll(long int n)
{
    roll=n;
}
void student::show_roll()
{
    cout<<"Roll:"<<roll<<endl;
}
class test:public student
{
protected:
    float s1,s2;
public:
    void get_marks(float,float);
    void show_marks();
};
void test::get_marks(float x,float y)
{
    s1=x;
    s2=y;
}
void test::show_marks()
{
    cout<<"Marks in 1st subject:"<<s1<<endl<<"Marks in 2nd subject:"<<s2<<endl;
}
class result:public test
{
    float total;
public:
    void display_result();
};
void result::display_result()
{
    show_roll();
    show_marks();
    cout<<"Total="<<s1+s2<<endl;
}
int main()
{
    result a;
    a.get_roll(120122);
    a.get_marks(78.5,83);
    a.display_result();
    return 0;
}






