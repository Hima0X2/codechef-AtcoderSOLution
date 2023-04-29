#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int i,k,n,x,t,sum=0,m;
     cin>>k;
     while(k--){
               sum=0;
          cin>>n>>x>>t;
          long long int p=t/x;
         if(x>t){
          cout<<0<<endl;
         }
         else if(x==t){
          cout<<n-1<<endl;
         }
         else if(p>=n){
          cout<<(n*(n-1))/2<<endl;
         }
         else{
          m=n-p;
          sum=sum+m*p+(p*(p-1))/2;
          cout<<sum<<endl;
         }
          }
}

