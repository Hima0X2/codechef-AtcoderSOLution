#include<bits/stdc++.h>
using namespace std;
int main()
{
 double t,a,b,r;
 cin>>t;
 while(t--){
     cin>>a>>b>>r;
     if(a>b){
          if((a/b)-1<=r){
               cout<<"YES\n";
          }
          else{
               cout<<"NO\n";
          }
     }
     else{
          if((b/a)-1<=r){
               cout<<"YES\n";
          }
          else{
               cout<<"NO\n";
          }
     }
 }
}
