#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    long long t,k;
    cin>>t;
    for(k=0;k<t;k++)
    {
    long long n;long long i;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long x=1;
    for(i=1;i<n;i++)
    {
        if(a[i]<=a[i-1])
        {
            x++;
        }
        else{a[i]=a[i-1];}
    }
    cout<<x<<"\n";
    }
}
