#include<bits/stdc++.h>
using namespace std;
int main()
{
     int k,n,a[10000],sum=0,i;
     cin>>n>>k;
     for(i=0;i<n;i++){
          cin>>a[i];
     }
     sort(a,a+n);
     for(i=0;i<k;i++){
          sum=sum+a[i];
     }
     cout<<sum<<endl;
}

