/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const int mx = 1e6+123;
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,j;
     int lim=1e6;
     long long int phi[mx];
     for(i=1;i<=lim;i++){
          phi[i]=i;
     }
 for(i=2;i<=lim;i++){
          if(phi[i]==i){
for(j=i;j<=lim;j=j+i){
     phi[j]=phi[j]*(i-1);
      phi[j]=phi[j]/i;
}
     }
     }
     cin>>t;
     while(t--){
cin>>n;
if(n==1){
     cout<<0<<endl;
     continue;
}
long long int sum=(n*(n-1))/2;
long long int pi=(phi[n]*n)/2;
cout<<sum-pi<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH
