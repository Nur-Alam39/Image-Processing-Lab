#include<iostream>
using namespace std;
class bank_account
{
    string name,acc_type;
    long int acc_no;
    float initial_balance,amount,net_balance;
public:
    bank_account();///constructor deceleration
    void deposit();
    void withdraw();
    void display();
};
bank_account::bank_account()
{
    cout<<"                          Account creation"<<endl;
    cout<<"Enter name:";
    getline(cin,name);
    cout<<"Enter account no:";
    cin>>acc_no;
    cout<<"Enter account type:";
    cin>>acc_type;
    cout<<"Enter initial balance:";
    cin>>initial_balance;
    net_balance=initial_balance;
}
void bank_account::deposit()
{
    cout<<"Enter the amount to deposit:";
    cin>>amount;
    net_balance+=amount;
    cout<<"Your current balance is "<<net_balance<<"tk."<<endl;
}
void bank_account::withdraw()
{
    cout<<"Enter the amount to withdraw:";
    cin>>amount;
    net_balance-=amount;
    if(net_balance<initial_balance)
    {
        cout<<"You have not enough balance to withdraw "<<amount<<"tk."<<endl;
        net_balance+=amount;
    }
    cout<<"Your current balance is "<<net_balance<<"tk."<<endl;
}
void bank_account::display()
{
    cout<<"                    Account Information"<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Account No."<<acc_no<<endl;
    cout<<"Account type:"<<acc_type<<endl;
    cout<<"Balance:"<<net_balance<<endl;
}
int main()
{
    bank_account BA;
    int c;
    while(1)
    {
        cout<<"\nOptions:\n-------\n";
        cout<<"1.Deposit money\n2.Withdraw money\n3.Display Information\n4.Exit\n";
        cout<<"Choose:";
        cin>>c;
        if(c==1)
            BA.deposit();
        else if(c==2)
            BA.withdraw();
        else if(c==3)
            BA.display();
        else if(c==4)
            break;
    }
    return 0;
}

