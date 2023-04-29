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
     long long int t,i,n,j,carry,mul,k;
     cin>>t;
     while(t--){
     cin>>n;
     long long int len=1;
     a[0]=1;
     for(i=2;i<=n;i++){
               carry=0;
          for(j=0;j<len;j++){
               mul=i*a[j]+carry;
               a[j]=mul%10;
     carry=mul/10;
          }
          while(carry){
               a[len]=carry%10;
                len++;
                carry=carry/10;
          }
     }
     for(k=len-1;k>=0;k--){
          cout<<a[k];
     }
     cout<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




