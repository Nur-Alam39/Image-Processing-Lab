#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
    string line[10000];
    cout<<"Enter a sentence:"<<endl;
    scanf("%[^\n]",line);
    char *r,p[12]="aeiouAEIOU";
    int vo=0;
    r=line;
    for(int i=0; r[i]; i++)
    {
        for(int j=0; p[j]; j++)
            if(r[i]==p[j])
                vo++;
    }
    if(vo==0)
        cout<<"There are no vowel."<<endl;
    else
        cout<<"There are "<<vo<<" vowels."<<endl;
    return 0;
}

