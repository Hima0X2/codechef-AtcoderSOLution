/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123;
long long int phi[mx],sum[mx],p[mx];

int main()
{
     optimize();
     long long int t,i,n,j;
      long long int lim=1e6;
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
     sum[0]=0;
     for(i=1;i<=lim;i++){
          sum[i]=sum[i-1]+phi[i];
     }
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     cin>>t;
     while(t--){
               long long int sm=0;
cin>>n;
for(i=1;i<=n;i++){
     sm=sm+(sum[n])*phi[i];
}
cout<<sm<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




