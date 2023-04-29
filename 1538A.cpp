#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,i,n;
     cin>>t;
     while(t--){
          cin>>n;
          long long int a[n],mn=1,mx=1;
          for(i=1;i<=n;i++){
               cin>>a[i];
               if(a[mn]>a[i]){
                    mn=i;
               }
               if(a[mx]<a[i]){
                    mx=i;
               }
          }
          if(mx<mn){
               swap(mx,mn);
          }
          cout << min(mx,min((n-mn+1), (mn+n-mx+1))) << endl;
     }
}

