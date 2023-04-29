#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
long long int n,x,i,sum=0;
cin>>n>>x;
for(i=1;i<=n;i++){
     cin>>a[i];
}
for(i=1;i<=n;i++){
    if(i%2==0){
     sum=sum+a[i]-1;
    }
    else{
     sum=sum+a[i];
    }
}
//cout<<sum<<endl;
if(sum<=x){
     cout<<"Yes\n";
}
else{
     cout<<"No\n";
}
}


