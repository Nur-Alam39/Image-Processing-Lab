#include<bits/stdc++.h>
using namespace std;
class f_vector
{
    int n;
    float v_i[];
public:
    f_vector();///constructor deceleration
    void modify();
    void multiply();
    void display();
};
f_vector::f_vector()
{
    cout<<"                Creating a new vector"<<endl;
    cout<<"Enter the size of vector:";
    cin>>n;
    v_i[n];
    cout<<"Enter "<<n<<" values:"<<endl;
    for(int i=0; i<n; i++)
        cin>>v_i[i];
    cout<<"The vector has created."<<endl;
}
void f_vector::modify()
{
    int position,i;
    cout<<"Enter the position where you want to modify:";
    cin>>position;
    if(position==0||position>n)
        cout<<"Invalid position."<<endl;
    else
    {
        float g_element;
        cout<<"Enter the new element to modify at position "<<position<<" :";
        cin>>g_element;
        v_i[position-1]=g_element;
        cout<<"The vector is modified."<<endl;
    }
}
void f_vector::multiply()
{
    int a;
    cout<<"Enter a scalar value:";
    cin>>a;
    for(int i=0; i<n; i++)
        v_i[i]=v_i[i]*a;
    cout<<"The vector is multiplied by "<<a<<endl;
}
void f_vector::display()
{
    cout<<" (";
    for(int i=0; i<n; i++)
    {
        cout<<v_i[i];
        if(i<n-1)
            cout<<", ";
    }
    cout<<")"<<endl;
}
int main()
{
    f_vector v;
    int n;
    while(1)
    {
        cout<<"Options:"<<endl<<"----------"<<endl;
        cout<<"1.Modify the vector"<<endl;
        cout<<"2.Multiply the vector by a scalar value"<<endl;
        cout<<"3.Display the vector"<<endl<<"4.Exit"<<endl<<"Choose:";
        cin>>n;
        if(n==1)
            v.modify();
        else if(n==2)
            v.multiply();
        else if(n==3)
        {
            cout<<"The vector is";
            v.display();
        }
        else if(n==4)
            exit(0);
    }
    return 0;
}

