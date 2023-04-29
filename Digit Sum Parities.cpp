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
long long int a[mx];

int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n;
     cin>>t;
     while(t--){
               long long int sum1=0,sum2=0,sum3=0;
cin>>n;
long long int d=n,e=n+1,f=n+2;
while(d!=0){
  sum1=sum1+d%10;
    d=d/10;
}
while(e!=0){
  sum2=sum2+e%10;
    e=e/10;
}
while(f!=0){
  sum3=sum3+f%10;
    f=f/10;
}
//cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;
if((sum1&1)!=(sum2&1)){
     cout<<n+1<<endl;
}
else{
     cout<<n+2<<endl;
}
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH
