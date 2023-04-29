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
     bool ok=false;
     cin>>n;
     if(n==1){
          ok=true;
     }
     else{
        for(i=2;i<=sqrt(n);i++){
         long long int p=i;
         while(p<=n){
          p=p*i;
          if(p==n){
               ok=true;
               break;
          }
         }
         if(ok){
          break;
         }
        }
     }
     if(ok){
          cout<<"YES\n";
     }
     else{
          cout<<"NO\n";
     }
//std::cout << std::fixed << std::setprecision(2);
}

int main1()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long double t,n;
     bool ok=false;
     cin>>n;
     t=n;
     if(n==1||n==0){
          ok=true;
     }
     else{
            long long int  i=2;
          while(n>=2){
               long double d=1/(double)i;
     n=pow(t,d);
     if(pow(round(n),i)==t){
          ok=true;
          break;
     }
     i++;
          }
     }
     if(ok){
          cout<<"YES\n";
     }
     else{
          cout<<"NO\n";
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH

/// ALHAMDULILLAH




