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
     long long int t,i,l,n,x;
     cin>>t;
     while(t--){
cin>>l>>n>>x;
if(l==0||n==0||x==0){
     cout<<0<<endl;
     continue;
}
if(l>n){
    i=min(n,abs(l-n));
cout<<i*x<<endl;
     continue;
}
i=min(l,abs(n-l));
cout<<i*x<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




