#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,k,i,sum=0;
     cin>>n>>k;
      long long int a[n],b[n];
     for(i=0;i<n;i++){
          cin>>a[i]>>b[i];
     }
       for(i=0;i<n;i++){
          if(a[i]>k){
               cout<<k<<endl;
               return 0;
          }
          else{
               k=k+b[i];
          }
     }
}

