#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a[100000],sum=0;
    cin>>n>>m;
    for(int i=0;i<m;i++){
     cin>>a[i];
     sum=sum+a[i];
    }
   if((n-sum)<0){cout<<-1<<endl;}
   else{cout<<n-sum<<endl;}
}

