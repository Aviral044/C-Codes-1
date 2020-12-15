#include <iostream>

using namespace std;

int main()
{
    char a[100];
    cin>>a;
    int b=0;int i=0;
    while(a[i]!='\0')
    {
        b=b+int(a[i]);
    }
    cout<<b;

}
