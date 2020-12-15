#include <iostream>

using namespace std;
int flip(int i,int j,int k)
{
    if(j%2==0)
    {
        return (j/2);
    }
    else
    {
        if(i==k)
        {
            return (j/2);
        }
        else{return ((j/2)+1);}
    }
}
int main()
{
    int t;cin>>t;
    while(t-->0)
    {
    int g;cin>>g;
    while(g-->0)
    {
    int n,i,q;
    cin>>n>>i>>q;
    int z=flip(n,i,q);
    cout<<z<<"\n";
    }}


}
