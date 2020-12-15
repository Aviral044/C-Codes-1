#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void showstack(stack <int> s)
{
    while(s.empty()==false)
    {
        cout<<'\t'<<s.top();
        s.pop();
    }
    cout<<'\n';
}
int main()
{
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(1);
    showstack(s);
    return 0;
}
