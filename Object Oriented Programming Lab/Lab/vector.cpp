#include<iostream.h>
#include<conio.h>

class vec
{
    int arr[10];

public :

    vec() // default constructor
    {
        for(int i = 0 ; i < 10 ; i++)
            arr[i] = 0;
    }

    vec(int a[])  // parameterised constructor
    {
        for(int i=0; i < 10 ; i++ )
        {
            arr[i] = a[i];
        }
    }

    ~vec()  // destructor
    {
        delete arr;
    }

    void  crea()
    {
        for(int i=0; i < 10 ; i++ )
        {
            cout << "\n Enter an element : ";
            cin >> arr[i];
        }
    }

    void modi(int pos, int ele)
    {
        arr[pos] = ele;
    }

    void disp()
    {
        cout<< "\n The elements of the array --> ";
        for(int i = 0; i<10; i ++)
        {
            cout<< arr[i] << " ";
        }
    }

    int disp_lar()
    {
        int lar = arr[0];
        for(int i =1; i < 10 ; i++)
        {
            if ( lar < arr[i] )
            {
                lar = arr[i];
            }
        }
        return lar;
    }

}; // end of class

void main()
{
    vec v1; // object v1 is created using default cons
    v1.crea();
    v1.disp();
    int max = v1.disp_lar();
    cout<< "\n The max element in the array is " << max;

    cout<<"\n\n Enter 1 for modifying the array element :";
    cout<<"\n Enter 2 for not modifying the array :";

    int ch, ps, el;
    cout<< "\n Enter your choice :";
    while(ch == 1)
    {
        cout<< "\n Enter the position to be changed";
        cin>>ps;
        cout<< "\n Enter the element to be entered ";
        cin >> el;
        v1.modi(ps, el);
        cout<< "\n Enter your choice :(1 or 2 )";
        cin >> ch;
    }

    cout<< "\n The elements after modification ";
    v1.disp();
    cout<< "\n The Max element is ";
    max = v1.dis_lar();
    cout << max ;

    getch();

}
