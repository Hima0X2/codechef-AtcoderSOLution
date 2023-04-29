#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     cin>>s;
     int l,i;
     for(i=0;i<s.size();i++){
          if((i%2==0)&&(s[i]>='A'&&s[i]<='Z')){
               cout<<"No\n";
               return 0;
          }
          else if((i%2==1)&&(s[i]>='a'&&s[i]<='z')){
               cout<<"No\n";
               return 0;
          }
     }
     cout<<"Yes\n";
               return 0;
}
