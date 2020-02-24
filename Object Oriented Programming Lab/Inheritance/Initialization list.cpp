#include<bits/stdc++.h>
using namespace std;
class XYZ
{
    int b,a;
public:
    XYZ(int m,int n):b(m),a(b*n){}
    void display()
    {
        cout<<"a="<<a<<endl<<"b="<<b<<endl;
    }
};
int main()
{
    XYZ xyz(4,5);
    xyz.display();
    return 0;
}

