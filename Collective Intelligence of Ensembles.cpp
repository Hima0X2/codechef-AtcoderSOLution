/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx=1e8+123;
bitset<mx>is_prime;
vector<long long int>prime;

void Prime(long long int lim){
    lim+=10;
    for(long long int i=3; i<=lim; i+=2) {
          is_prime[i]=1;
    }
    long long int sq=sqrt(lim);
    for(long long int i=3; i<=sq; i+=2){
        if(is_prime[i]){
            for(long long int j=i*i; j<=lim; j+=(i+i)){
          is_prime[j]=0;
            }
        }
    }
    is_prime[2]=1;
    prime.push_back(2);
    for(long long int i=3; i<=lim; i+=2){
        if(is_prime[i]) {
               prime.push_back(i);
        }
    }
}
void hi(long long int n){
     long long int c=0,f=1;
     for(auto u:prime){
     if(1LL*u*u>n|n==0){
               break;
          }
     if(n%u==0){
          n=n/u;
          f=f*u;
          while(n%u==0){
                 n=n/u;
          }
     }
     }
     if(n>1){
           f=f*n;
     }
     cout<<f<<endl;
}
int main()
{
     optimize();
    // Prime(1e6);
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n;
     cin>>n;
     Prime(n);
  hi(n);
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




