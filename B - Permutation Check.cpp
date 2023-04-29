#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int i,n;
     cin>>n;
     long long int a[10000];
     for(i=0;i<n;i++){
          cin>>a[i];
     }
     sort(a,a+n);
      for(i=1;i<=n;i++){
          if(a[i-1]!=i){
               cout<<"No\n";
               return 0;
          }
     }
     cout<<"Yes\n";
}

