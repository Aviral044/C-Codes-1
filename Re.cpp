#include <iostream>
using namespace std;

int main() {
    int t=0;int l=0;
    cin>>t;
    for (l=0;l<t;l++)
    {
        int n=0;
        int k=0;
        cin>>n;
    
    while(n!=0)
    {
        k=k*10+n%10;
        n=n/10;
    }
         cout<<k<<"\n";
    }
    return 0;
}
