#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class bank
{
 char name[22];
 int acc_no;
 char type_acc[22];
 int bal;
 public:
  void accept();
  void disp();
  void deposite(int);
  void withdraw(int);

};
void bank::accept()
{
 cout<<"\n\nENTER THE A/C NO,CUST NAME,A/C TYPE AND BALANCE OF A CUSTOMER : \n";
 cin>>acc_no>>name>>type_acc>>bal;
}
void bank::disp()
{
 cout<<"\n\n CUSTOMER ACCOUNT NO : "<<acc_no;
 cout<<"\n CUSTOMER NAME : "<<name;
 cout<<"\n CUSTOMER ACCOUNT TYPE : "<<type_acc;
 cout<<"\n CUSTOMER ACCOUNT BALANCE : "<<bal;
}
void bank::deposite(int ac_no)
{
 if(acc_no==ac_no)
 {
  int a;
  cout<<"\n ENTER THE AMOUNT TO DEPOSIT : ";
  cin>>a;
  bal=bal+a;
 }
}
void bank::withdraw(int ac_no)
{
 if(acc_no==ac_no)
 {
  int a;
  cout<<"\n ENTER THE WITHDRAWL AMOUNT : ";
  cin>>a;
  if(bal<a)
   cout<<"\nWITHDRAWL AMOUNT IS GREATER THAN BALANCE ";
  else
   bal=bal-a;
 }
}
int main()
{
 bank b[12];
 int ch,n;
 clrscr();
 do
 {
  cout<<"\n MAIN MENU ";
  cout<<"\n 1.ACCEPT CUSTOMER DETAILS";
  cout<<"\n 2.DISPLAY CUSTOMER DETAILS ";
  cout<<"\n 3.DEPOSITE AMOUNT";
  cout<<"\n 4.WITHDRAWL AMOUNT";
  cout<<"\n 5.EXIT ";
  cout<<"\n ENTER YOUR CHOICE : ";
  cin>>ch;
  switch(ch)
  {
   case 1: cout<<"\n ENTER HOW MANY RECORDS YOU WANT TO ENTER : ";
    cin>>n;
    for(int i=0;i<n;i++)
     b[i].accept();
    break;
   case 2: for(i=0;i<n;i++)
     b[i].disp();
    break;
   case 3: int ac_no;
    cout<<"\n ENTER THE ACCOUNT NO. IN WHICH YOU WANT TO DEPOSIT AMOUNT : ";
    cin>>ac_no;
    for(i=0;i<n;i++)
     b[i].deposite(ac_no);
    break;
   case 4: cout<<"\n ENTER THE ACCOUNT NO. FROM WHICH YOU WANT TO WITHDRAWL AMOUNT : ";
    cin>>ac_no;
    for(i=0;i<n;i++)
     b[i].withdraw(ac_no);
    break;
   case 5: exit(0);
  }
 }
 while(ch!=5);
 getch();
 return(0);
}
