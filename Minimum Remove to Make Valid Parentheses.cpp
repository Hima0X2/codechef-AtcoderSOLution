/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
     long long int i,n,pos;
     string s,t;
     cin>>s;
     memset(a,0,sizeof(a));
      stack<int> st;
     for(i=0;i<s.size();i++){
      if(s[i]==')'){
          if(st.empty()){
            a[i]=1;
          }
         else{
               st.pop();
          }
      }
     else if(s[i]=='('){
               st.push(i);
             }
     }
     while(!st.empty()){
        a[st.top()]=1;
        st.pop();
     }
    for(i=0;i<s.size();i++){
         if(!a[i]){
          t=t+char(s[i]);
         }
    }
cout<<t<<endl;
}
/// ALHAMDULILLAH



