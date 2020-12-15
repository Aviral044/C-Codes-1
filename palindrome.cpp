#include <iostream>
using namespace std;

int reverse(int a)
{
    int rev=0;
    while(a!=0)
    {
        rev=rev*10+a%10;
        a=a/10;
    }
    return rev;
}
int main()
{
    int a;
    cin>>a;
    int b=reverse(a);
    if(a==b)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"NOt palindrome";
    }
    return 0;
}



    
