#include<bits/stdc++.h>
using namespace std;
int main()
{
     double t,a,b,r,c=1,d=1,x=0;
 cin>>t;
 while(t--){
     cin>>a>>b>>r;
     if((a-1)+a*(b-1)==r){
          cout<<"YES\n";
     }
     else{
          cout<<"NO\n";
     }
 }
}
