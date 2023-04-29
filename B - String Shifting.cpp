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
     long long int t,i,n,p=0,j,q=0;
     string mx,mn;
     string s;
     cin>>s;
     if(s.size()==1){
          cout<<s<<endl;
          cout<<s<<endl;
          return 0;
     }
     mx=s,mn=s;
     for(i=0;i<s.size();i++){
              std::rotate(s.begin(), s.begin() + 1, s.end());
    if(s>=mx){
     mx=s;
}
if(s<=mn){
     mn=s;
}
     }
     cout<<mn<<endl;
     cout<<mx;
     cout<<endl;
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




