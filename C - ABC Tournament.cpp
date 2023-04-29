#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int i,n,mx=0,mx1=0;
     cin>>n;
     long long int a[100000];
     long long int z=pow(2,n);
     for(i=0;i<z;i++){
          cin>>a[i];
     }
    for(i=0;i<z/2;i++){
        mx=max(a[i],mx);
     }
     for(i=z/2;i<z;i++){
        mx1=max(a[i],mx1);
     }
  int p=min(mx,mx1);
   for(i=0;i<z;i++){
          if(p==a[i]){
               cout<<i+1<<endl;
               return 0;
          }
     }
}
