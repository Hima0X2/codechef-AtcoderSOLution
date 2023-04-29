/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b)
{
    return a*(b/__gcd(a,b));
}
const long long int mx = 1e7+123;
long long int a[mx];
bool isValid(string s) {
        int i;
            stack<char> st;
    for(i=0;i<s.size();i++){
     if(st.empty()){
          if(s[i]=='('||s[i]=='{'||s[i]=='['){
               st.push(s[i]);
             }
             else{
               return false;
             }
     }
     else{
         if(s[i]=='('||s[i]=='{'||s[i]=='['){
               st.push(s[i]);
             }
             else{
               if(st.top()=='('&&s[i]==')'){
                    st.pop();
               }
               else if(st.top()=='{'&&s[i]=='}'){
                    st.pop();
               }
               else if(st.top()=='['&&s[i]==']'){
                    st.pop();
               }
               else{
                    return false;
               }
             }
     }
    }
    if(st.empty())return true;
    return false;
    }
int main()
{
    optimize();
    long long int t,i,n;
    string s;
    cin>>s;
    int a=0,b=0,c=0;
    cout<<isValid(s)<<endl;
}
/// ALHAMDULILLAH



