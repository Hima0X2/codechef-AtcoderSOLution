#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,a[100000],sum=0;
    cin>>n;
    for(i=0;i<n;i++){
     cin>>a[i];
     }
     sort(a,a+n);
     for(i=0;i<n-1;i++){
        sum=sum+a[i];
     }
     if(a[n-1]<sum){
          cout<<"Yes\n";
     }
     else{
          cout<<"No\n";
     }
}


