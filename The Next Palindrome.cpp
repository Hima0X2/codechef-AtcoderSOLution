/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b)
{
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
    while(t--)
    {
        string s,u;
        cin>>s;
        u=s;
        long long int l=s.size();
        for(i=l/2;i<l;i++){
          s[i]=s[l-i-1];
        }
        if(s>u){
          cout<<s<<endl;
        }
        else{
          for(i=(l-1)/2;i>=0;i--){
               if(u[i]!='9'){
                    u[i]++;
                    break;
               }
               else{
                    u[i]='0';
               }
          }
          for(i=l/2;i<l;i++){
               u[i]=u[l-i-1];
          }
          if(u[0]=='0'){
                    u=u+'1';
               u[0]='1';
          }
          cout<<u<<endl;
        }
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH
