#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int p,n,f,sum[10000],i,j,d=0;
for(i=1;i<=10;i++){
          f=1;
     for(j=1;j<=i;j++){
          f=f*j;
     }
sum[i]=f;
}
cin>>n;
for(i=10;i>=1;i--){
    if(sum[i]<=n){
     d=d+n/sum[i];
     n=n%sum[i];
    }
    //cout<<n<<" "<<d<<endl;
}
cout<<d<<endl;
}

