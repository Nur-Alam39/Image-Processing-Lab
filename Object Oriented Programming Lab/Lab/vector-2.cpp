#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
class vector_a
{
    float d[100];
    int s;
public:
    void create(void);
    void modify(void);
    void multiply(void);
    void display(void);
};

void vector_a :: create(void)
{
    cout<<"\n\nEnter of Array you want to create:-";
    cin>>s;
    cout<<"Enter "<<s<<" Real Numbers\n";
    for(int i=0; i<s; i++)
        cin>>d[i];
}

void vector_a :: modify(void)
{
    int mfy_value;
    float with;
    cout<<"\nEnter Location of array at which value is to be modified:-";
    cin>>mfy_value;
    cout<<"Enter Value with which you want to Replace:-";
    cin>>with;
    d[mfy_value]=with;
}

void vector_a :: multiply(void)
{
    int mul;
    cout<<"\nEnter value with which you want to multiply:-";
    cin>>mul;
    for(int i=0; i<s; i++)
        d[i]=d[i]*mul;
}
void vector_a :: display(void)
{
    cout<<"\n\nDisplay of Array\n";
    cout<<"(";
    for(int i=0; i<s; i++)
    {
        cout<<d[i];
        if(i!=s-1)
            cout<<",";
    }
    cout<<")";
}

int main()
{
    clrscr();
    vector_a o1;
    int choice;
    do
    {
        cout<<"\n\nChoice List\n";
        cout<<"1)    To Create vector_a Array\n";
        cout<<"2)    To Modify Array\n";
        cout<<"3)    To Multiply with Scalar value\n";
        cout<<"4)    To Display\n";
        cout<<"5)    EXIT\n";
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice)
        {
        case 1:
            o1.create();
            break;
        case 2:
            o1.modify();
            break;
        case 3:
            o1.multiply();
            break;
        case 4:
            o1.display();
            break;
        }
    }
    while(1);
}
