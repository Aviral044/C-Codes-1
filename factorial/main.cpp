#include <iostream>

using namespace std;

long findTrailingZeros(long n)
{
    long count = 0;
    for (long i = 5; n / i >= 1; i *= 5)
        {count += n / i;}

    return count;
}

int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
    long f;long j;
    cin>>f;
    j=findTrailingZeros(f);
    cout<<j<<"\n";
    }
    return 0;
}
