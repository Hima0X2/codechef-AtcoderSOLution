/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e7+123;
long long int a[mx];
int main()
{
     optimize();
     long long int t,i,n,sum1,sum2;
     cin>>t;
     while(t--){
cin>>n;
long long int p=pow(2,n);
long long int mx=INT_MIN,mn=INT_MAX;
//cout<<p<<endl;
for(i=0;i<p;i++){
     cin>>a[i];
     mn=min(a[i],mn);
     mx=max(a[i],mx);
}
if(n==0){
     cout<<"YES\n";
     continue;
}
if(mx-mn<2){
      cout<<"YES\n";
}
else{
     cout<<"NO\n";
}
}
}
/// ALHAMDULILLAH




