#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,k,i,j,a,x=0,y=0,z=0,c;
     cin>>n>>k;
     vector<long long int> v(n+1);
     for(i=0;i<k;i++){
          cin>>a;
           long long int b;
          for(j=0;j<a;j++){
               cin>>b;
               v[b]++;
          }
     }
     long long int ans=0;
     for(i=1;i<=n;i++){
          if(v[i]==0){
               ans++;
          }
     }
     cout<<ans<<endl;
}

