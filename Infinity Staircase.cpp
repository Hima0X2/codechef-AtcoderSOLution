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
cin>>n;
if(n==1){
     cout<<0<<endl;
}
else{
     if(n%5==0||n%5==1){
          cout<<(n/5)*2<<endl;
     }
     else{
          cout<<(n/5)*2+1<<endl;
     }
}
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH



