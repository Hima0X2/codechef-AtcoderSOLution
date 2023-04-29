#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,q,a[10000],x,b,i,c;
     cin>>n;
     for(i=1;i<=n;i++){
          cin>>a[i];
     }
     cin>>q;
     while(q--){
               c=1;
          cin>>x>>b;
          a[x]=b;

           for(i=1;i<=n;i++){
          if(a[i]!=i){
               c++;
          }
          }
     cout<<c<<endl;
     }
}
