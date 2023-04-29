#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int i,j,n,sum=0,sum2=0;
     cin>>n;
     long long int a;
     for(i=1;i<=n;i++){
          cin>>a;
          sum=sum+a;
          sum2=sum2+a*a;
     }
     cout<<sum2*n-sum*sum<<endl;
}
