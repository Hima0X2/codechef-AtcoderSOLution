#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int a,b,sum=0,c,i,j,k;
     cin>>a>>b>>c;
     a=a*(a+1)/2;
      b=b*(b+1)/2;
       c=c*(c+1)/2;
     a=a%998244353;
     b=b%998244353;
     c=c%998244353;
     a=(((a*b)%998244353)*c)%998244353;

    sum=a%998244353;
    cout<<sum<<endl;
}

