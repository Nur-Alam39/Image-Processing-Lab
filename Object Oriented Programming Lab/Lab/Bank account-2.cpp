#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
class  bank
{
	private:
		char name[10],type[10];
		int acc_no,balance;
public:
	void enterdata(void)
	{
        cout<<"enter name of person";
        cin>>name;
        cout<<"enter type of account";
        cin>>type;
        cout<<"enter account no.";
        cin>>acc_no;
        cout<<"enter balance";
        cin>>balance;
	}
	void deposit(void)
	{
        int n;
        cout<<"enter amount to deposit";
        cin>>n;
        cout<<"total is:"<<balance+n;
        balance=balance+n;
	}
	void withdraw(void)
	{
        int w;
        cout<<"balance is:"<<balance;
        cin>>w;
        cout<<"balance is:"<<balance-w;
        balance=balance-w;
	}
	void dispdata(void)
	{
        cout<<"name:"<<name;
        cout<<"balance left:"<<balance;
	}
};
int main(void)
{
	bank b1,b2,b3,b4,b5,b6,b7,b8,b9,b10;
	int k,i,choice;
	while(k)
    {
        cout<<"\n1.To assign the initial values\n";
		cout<<"2.To deposit an amount\n";
		cout<<"3.To withdraw an amount\n";
		cout<<"4.To display name and balance\n";
		cout<<"5.Exit\n";
		cin>>choice;
		switch(choice)
		{
		    case 1: b1.enterdata();
		    break;
		    case 2: b1.deposit();
		    break;
		    case 3: b1.withdraw();
	        break;
            case 4: b1.dispdata();
	        break;
	        case 5: exit(0);
	        break;
	        default:
	        cout<<"wrong choice";
	        break;
		}
    }
	getch();
}
