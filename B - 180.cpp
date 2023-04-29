#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     int n,l,i;
     cin>>s;
     reverse(s.begin(),s.end());
     for(i=0;i<s.size();i++){
          if(s[i]=='9'){
               s[i]='6';
          }
          else if(s[i]=='6'){
               s[i]='9';
          }
     }
     cout<<s<<endl;
}
