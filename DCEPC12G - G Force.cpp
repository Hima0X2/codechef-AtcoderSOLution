/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const int mx = 1e6+123;
long long int p[mx],phi[mx],fact[mx];
bitset<mx> is_prime;
vector<int> prime;
long long int pw(long long int b,long long int p){
     if(p==0) return 1;
     if(p%2) return ((b*pw(b,p-1)));
     else{
          long long int k=pw(b,p/2);
          return ((k*k));
     }
}
//time complexity= log(n)
void Prime(int n){
     n=n+100;
     int i,j;
      is_prime[2]=1;
      prime.push_back(2);
     for(i=3;i<=n;i=i+2){
          is_prime[i]=1;
     }
     for(i=3;i<=sqrt(n);i=i+2){
          if(is_prime[i]==1){
               for(j=i*i;j<=n;j=j+(i+i)){
                    is_prime[j]==0;
               }
          }
     }
     for(i=3;i<=n;i=i+2){
           if(is_prime[i]==1){
                prime.push_back(i);
           }
     }
}
int main()
{
     optimize();
     long long int t,i,n,j;
     int lim=1e6;
     long long int mod=1e9+7;
     Prime(lim);
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
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     for(i=1;i<=lim;i++){
    p[i]=max(0LL,prime[i]-phi[i]);
     }
     fact[1]=1;
     for(i=2;i<=lim;i++){
    fact[i]=(fact[i-1]*i)%mod;
     }
     cin>>t;
     while(t--){
cin>>n;
 long long int g=(pw(phi[i],fact[i]))%mod;
cout<<g<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




