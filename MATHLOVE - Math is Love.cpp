//In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
long long int sum(long long int n){
     return (n*(n+1))/2;
}
int main()
{
   long long int t,i,y;
   cin>>t;
   while(t--){
     cin>>y;
     long long int l=0,r=1e5,ans=-1;
     while(l<=r){
          long long int mid=(l+r)/2;
          if(sum(mid)==y){
               ans=mid;
               break;
          }
          else if(sum(mid)<y){
               l=mid+1;
          }
          else if(sum(mid)>y){
               r=mid-1;
          }
     }
     if(ans==-1){
          cout<<"NAI\n";
     }
     else{
          cout<<ans<<'\n';
     }
   }
}

