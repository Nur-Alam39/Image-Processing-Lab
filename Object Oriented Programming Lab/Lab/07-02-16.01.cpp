#include<iostream>
using namespace std;
struct Person_info
{
    string name,designation;
    int age,salary;
};
struct Person_info a[10];
int main()
{
    while(1)
    {
        int x,counter=0;
        cout<<"Press 1 to enter an information"<<endl;
        cin>>x;
        if(x==1)
        {
            cout<<"Enter name:";
            cin>>a[counter].name;
            cout<<"Enter age:";
            cin>>a[counter].age;
            cout<<"Enter designation:";
            cin>>a[counter].designation;
            cout<<"Enter salary:";
            cin>>a[counter].salary;
            cout<<endl<<"Information of the person:"<<endl;
            cout<<"Name:"<<a[counter].name<<endl;
            cout<<"Age:"<<a[counter].age<<endl;
            cout<<"Designation:"<<a[counter].designation<<endl;
            cout<<"Salary:"<<a[counter].salary<<endl;
        }
        cout<<endl;
        counter++;
        if(counter==10)
            cout<<"No space in the array."<<endl;

    }
    return 0;
}
