#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long n,a,p,x,ans=10000000000000,c=1;
 cin>>n;
 while(n--){
     cin>>a>>p>>x;
     if(x>a){
          if(ans>p){
                    c=0;
               ans=p;
          }
     }
 }
 if(c){
     cout<<-1<<endl;
 }
 else{
     cout<<ans<<endl;
 }
}

