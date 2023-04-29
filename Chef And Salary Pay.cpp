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
     long long int t,i,n,x,y;
     cin>>t;
     while(t--){
               long long int sum=0,c=0,d=0,mx=0;
cin>>x>>y;
string s;
cin>>s;
for(i=0;i<s.size();i++){
     if(s[i]=='1'){
          c++;
          d++;
     }
     else{
          mx=max(mx,d);
          d=0;
     }
}
mx=max(mx,d);
cout<<c*x+mx*y<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




