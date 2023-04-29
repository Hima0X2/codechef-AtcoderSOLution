/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e7+123;
long long int a[mx];
long long int mod=998244353;
long long int sump(long long int n){
     long long int m=n+1;
     if(n%2==1){
          m=m/2;
     }
     else{
          n=n/2;
     }
     return (m%mod*n%mod)%mod;
}
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i=9,j=0,n,sum=0,z=0,b=9;
     cin>>n;
   while(1){
     if(i<=n){
         sum=(sum+sump(i%mod))%mod;
     }
     else{
       sum=(sum+sump((n)%mod))%mod;
       break;
     }
     n=n-i;
     i=i*10;
   }
   cout<<sum%mod<<endl;
}
/// ALHAMDULILLAH
