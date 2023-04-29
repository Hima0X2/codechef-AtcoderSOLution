#include<bits/stdc++.h>
using namespace std;
int priority(char x)
{
    if(x=='(')
        return 0;
    else if(x=='+' || x== '-')
        return  1;
    else if(x=='*' || x == '/')
        return 2;
    else if(x=='^')
        return 3;
}
int main()
{
    long long int t,i,n;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        stack<char> st;
        for(i=0; i<s.size(); i++)
        {
            if(isalnum(s[i]))
            {
                cout<<s[i];
            }
            else if(s[i]=='(')
            {
                st.push(s[i]);
            }
            else if(s[i]==')')
            {

                char x=st.top();
                while(x!='(')
                {
                    cout<<x;
                    st.pop();
                    x=st.top();
                }
            }
            else
            {
                while(priority(st.top()) >= priority(s[i]))
                {
                    cout<<st.top();
                    st.pop();
                }
            }
        }
        cout<<endl;
    }
}
