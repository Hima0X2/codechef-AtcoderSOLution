/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define MOD 1000000007
const long long int mx = 1e7+123;
long long int a[mx];
long long int mp[mx];
long long int fib(long long int n){
     if(n==0){
          return 0;
     }
     else if(n==1||n==2){
          return 1;
     }
     if(mp[n]){
          return mp[n];
     }
     long long int k;
       if(n&1){
        k=(n+1)/2;
     }
     else{
      k=n/2;
     }
         if(n&1){
          return mp[n]=(fib(k-1)%MOD*fib(k-1)%MOD+fib(k)%MOD*fib(k)%MOD)%MOD;
     }
     else{
          return mp[n]=((2*fib(k-1)%MOD+fib(k)%MOD)*fib(k)%MOD)%MOD;
     }
}
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n;
     for(i=0;i<=50;i++){
          cout<<"fib["<<i<<"] = "<<fib(i)<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




