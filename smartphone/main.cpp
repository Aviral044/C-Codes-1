#include <iostream>

using namespace std;
#include <bits/stdc++.h>
int main()
{
    int n;
    cin>>n;
    long a[n];int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long max=0;long temp=0;
    sort(a, a + n);
    for(i=0;i<n;i++)
    {
        temp=a[i]*(n-i);
        if(temp>max)
        {
            max=temp;
        }
    }
    cout<<max;
    return 0;
}
