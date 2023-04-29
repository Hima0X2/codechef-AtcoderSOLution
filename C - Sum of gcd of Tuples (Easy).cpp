#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int i,j,k,n,sum=0;
     cin>>n;
     for(i=1;i<=n;i++){
               for(j=1;j<=n;j++){
                    for(k=1;k<=n;k++){
                              sum=sum+__gcd(i,__gcd(j,k));
                    }
               }
     }
     cout<<sum<<endl;
}

