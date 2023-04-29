#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,i,sum=0,rev=0,m=0;
    cin>>n;
    for(i=0;i<n;i++){
     cin>>x;
     x=abs(x);
     sum=sum+x;
     rev=rev+x*x;
     m=max(m,x);
    }
    cout<<fixed<<setprecision(15);
    cout<<sum<<endl;
    cout<<sqrt(rev)<<endl;
    cout<<m<<endl;
}


