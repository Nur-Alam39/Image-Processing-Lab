#include<bits/stdc++.h>
using namespace std;
class coordinate
{
    float x,y;
public:
    coordinate(float m,float n);
    void display();
};
coordinate::coordinate(float m,float n)
{
    x=m;
    y=n;
}
void coordinate::display()
{
    cout<<"(x,y)=("<<x<<","<<y<<")"<<endl;
}
int main()
{
    coordinate point(4.5,6.6);
    point.display();
    return 0;
}

