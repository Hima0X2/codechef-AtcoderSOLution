#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,i,n,m,a[1000],sum=0;
     cin>>t;
     while(t--){
          cin>>n>>m;
          for(i=0;i<n;i++){
               cin>>a[i];
          }
          sort(a,a+n);
          sum=a[0]-m;
            for(i=1;i<n;i++){
               sum=sum+a[i];
          }
          sum=sum+m;
          cout<<sum<<endl;
          sum=0;
     }
}
