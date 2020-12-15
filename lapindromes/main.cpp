#include <iostream>
#include <stdio.h>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

int sum(char a[100])
{
    int b=0;int i=0;
    while(a[i]!='\0')
    {
        b=b+int(a[i]);i++;
    }
    return b;
}
int main()
{
    int t=0;cin>>t;

    while(t>0)
    {
    char a[100];
    char b[100];char c[100];
    int i=0;cin>>(a);
    for(i=0;i<(strlen(a))/2;i++)
    {
        b[i]=a[i];
    }
    b[i]='\0';
    int x=0;
    int l=((strlen(a)%2)==0)?(strlen(a)/2):(strlen(a)/2+1);
    for(i=l;i<strlen(a);i++)
    {
        c[x]=a[i];x++;
    }
    c[x]='\0';
    puts(b);puts(c);
    int a1=sum(b);int a2=sum(c);
    cout<<a1<<" "<<a2<<"\n";
    if(a1==a2)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }t--;}

}
