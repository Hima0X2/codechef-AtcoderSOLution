#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,m,t,sub,sum;
    cin>>n>>m>>t;
    long long int a[2*m];
    for(i=0;i<2*m;i++){
     cin>>a[i];
    }
    sum=n-a[0];
    sub=sum;
     for(i=1;i<2*m;i++){
               sub=sum;
     sum=sum-(a[i]-a[i-1]);
     if(sum<0){
          sub=sub+(a[i]-a[i-1]);
     }
     else{
          sub=sum;
     }
    }
    //cout<<sub<<endl;
    if(sub!=0){cout<<"Yes"<<endl;}
    else{cout<<"No"<<endl;}
}


