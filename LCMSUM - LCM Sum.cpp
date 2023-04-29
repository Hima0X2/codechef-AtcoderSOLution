/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e6+123;
long long int a[mx],phi[mx];

int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,j;
int lim=1e6;
for(i=1;i<=lim;i++){
   phi[i]=i;
}
for(i=2;i<=lim;i++){
     if(phi[i]==i){
          for(j=i;j<=lim;j=j+i){
               phi[j]=phi[j]/i;
                phi[j]=phi[j]*(i-1);
          }
     }
}
for(i=1;i<=lim;i++){
     for(j=i;j<=lim;j=j+i){
          a[j]=a[j]+phi[i]*i;
     }
}
     cin>>t;
     while(t--){
               long long int sum=0;
cin>>n;
sum=(a[n]+1)*n;
sum=sum/2;
cout<<sum<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
//time complexity : o(nln(n)+t)
}
/// ALHAMDULILLAH




