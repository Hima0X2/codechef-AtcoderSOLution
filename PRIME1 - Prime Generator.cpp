/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx=1e8+123;
bitset<mx>is_prime;
vector<long long int>prime;
 long long int a[mx];
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
void segseive(long long int l,long long int r)
{
     long long int i,j;
     for(i=0;i<r-l+1;i++){
          is_prime[i]=1;
     }
     for(i=0;prime[i]*prime[i]<=r;i++){
          long long int current=prime[i];
          long long int base=(l/current)*current;
          if(base<l){
               base=base+current;
          }
          for(j=base;j<=r;j=j+current){
               is_prime[j-l]=0;
          }
          if(current==base){
                is_prime[base-l]=1;
          }
     }
    if (l == 1){
               is_prime[0] = 0;
    }
     for(i=0;i<r-l+1;i++){
          if(is_prime[i]){
               cout<<i+l<<endl;
          }
     }
    cout<<endl;
}
int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,n,m;
    Prime(1e5);
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        segseive(m,n);
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH
