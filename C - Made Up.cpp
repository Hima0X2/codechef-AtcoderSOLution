#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n,i,j,d=0;
cin>>n;
long long int a[n],b[n],c[n];
map<long long int,long long int> mp;
for(int i=1;i<=n;i++){
    cin>>a[i];
    mp[a[i]]++;
}
for(int i=1;i<=n;i++){
    cin>>b[i];
}
for(int i=1;i<=n;i++){
    cin>>c[i];
}
for(int i=1;i<=n;i++){
d=d+mp[b[c[i]]];
}
cout<<d<<endl;
}
