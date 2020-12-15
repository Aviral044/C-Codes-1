#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//function to return precedence

int prec(char c)
{
    if(c == '^')
    return 3;
    else if(c == '*' || c == '/')
    return 2;
    else if(c == '+' || c == '-')
    return 1;
    else
    return -1;
}
void infixTopostfix(string S)
{
    stack <char> st;
    st.push('N');
    int l=s.length();
    string ns;
    for(int i = 0; i < l; i++)
    {
        if((s[i]>='a' && s[i]='z')||(s[i]>='A' && s[i]<='Z'))
        {
            ns+=s[i];
        }
        else if(s[i]='(')
    }
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
