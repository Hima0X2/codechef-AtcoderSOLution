#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,i,n,c=0,d=0,x;
     cin>>t;
     while(t--){
               c=0;
     d=0;
          cin>>n;
          long long int a[n];
          for(i=0;i<n;i++){
               cin>>a[i];
               if(a[i]%2!=0){
                   c++;
               }
          }
          if(c%2==0&&c!=1){
               x=1;
          }
          else{
               if(c==1){
                    x=2;
               }
               else{
                   x=3;
               }
          }
     }
}

