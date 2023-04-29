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
     bool ok=true,c=false,sm=false;
     string s;
     cin>>s;
     n=s.size();
     sort(s.begin(),s.end());
      if(int(s[0])>=97&&int(s[0])<=122){
               sm=true;
          }
          else if(int(s[0])>=65&&int(s[0])<=90){
              c=true;
          }
         // cout<<s<<endl;
     for(i=1;i<n;i++){
          if(int(s[i])>=97&&int(s[i])<=122){
               sm=true;
          }
          else if(int(s[i])>=65&&int(s[i])<=90){
               c=true;
          }
        if(s[i]==s[i-1]){
               ok=false;
          }
     }
     //cout<<c<<" "<<sm<<" "<<ok<<endl;
     if(c==true&&sm==true&&ok==true){
          cout<<"Yes\n";
     }
     else{
          cout<<"No\n";
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




