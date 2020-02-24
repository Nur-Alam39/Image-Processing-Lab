#include<bits/stdc++.h>
using namespace std;
class bank_account
{
    char name[100],acc_type[100];
    int acc_no;
    float net_balance;
public:
    void acc_create();
    void initial_balance();
    void deposit();
    void withdraw();
    void display();
};
void bank_account::acc_create()
{
    cout<<"                      Account Creation"<<endl<<endl;
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter account no:";
    cin>>acc_no;
    cout<<"Enter account type:";
    cin>>acc_type;
}
void bank_account::initial_balance()
{
    cout<<"Initial balance:";
    cin>>net_balance;
}
void bank_account::deposit()
{
    float tk;
    cout<<endl<<"Enter the amount of Tk. to deposit:";
    cin>>tk;
    net_balance=net_balance+tk;
    cout<<"Your current balance after deposit "<<tk<<" taka = "<<net_balance<<"tk"<<endl;
}
void bank_account::withdraw()
{
    float tk;
    cout<<endl<<"Enter the amount of Tk. to withdraw:";
    cin>>tk;
    net_balance=net_balance-tk;
    if(net_balance<0)
    {
        cout<<"You have not enough balance to withdraw Tk."<<tk<<endl;
        net_balance=net_balance+tk;
    }
    cout<<"Your current balance after withdraw "<<tk<<" taka = "<<net_balance<<"tk"<<endl;
}
void bank_account::display()
{
    cout<<endl<<endl<<"                            Account Information"<<endl<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Account no:"<<acc_no<<endl;
    cout<<"Account type:"<<acc_type<<endl;
    cout<<"Current balance:"<<net_balance<<endl;
}
int main()
{
    int c;
    bank_account BA;
    BA.acc_create();
    BA.initial_balance();
    while(1)
    {
        cout<<endl<<"Options:"<<endl<<"--------"<<endl;
        cout<<"1.Deposit\n2.Withdraw\n3.Display account information"<<endl;
        cout<<"Choose:";
        cin>>c;
        if(c==1)
            BA.deposit();
        else if(c==2)
            BA.withdraw();
        else if(c==3)
            BA.display();
    }
    return 0;
}
