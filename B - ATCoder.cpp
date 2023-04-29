#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,c=0,ans=0;
     string s;
     cin>>s;
     for(i=0;i<s.size();i++){
          if(s[i]=='A'||s[i]=='G'||s[i]=='C'||s[i]=='T'){
               c++;
               ans=max(ans,c);
          }
          else{
               c=0;
          }
     }
     cout<<ans<<endl;
}
