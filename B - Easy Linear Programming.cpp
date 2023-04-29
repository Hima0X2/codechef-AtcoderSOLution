/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
     long long int a,b,c,k,sum=0;
     cin>>a>>b>>c>>k;
     long long int p=min(k,a)*1;
     //cout<<p<<endl;
     sum=sum+p;
     k=k-(a+b);
     //cout<<k<<endl;
          while(k>0){
               sum--;
               k--;
     }
     cout<<sum<<endl;
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH



