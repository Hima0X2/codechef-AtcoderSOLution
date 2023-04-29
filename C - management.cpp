#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
     long long int a[1000000]={0},b[10000000],i,n;
     cin>>n;
     for(i=2;i<=n;i++){
          cin>>b[i];
     }
      for(i=1;i<=n;i++){
          a[b[i]]++;
     }
      for(i=1;i<=n;i++){
          cout<<a[i]<<"\n";
     }
}
