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
     long long int t,i,n,row=1;
     string s;
     cin>>s;
     cin>>n;
    string v[1000];
     if(n==1){
          cout<<s<<endl;
     }
     else{
               bool ok;
          for(i=0;i<s.size();i++){
                    v[row]=v[row]+s[i];
              if(row==1){
               ok=true;
              }
              else if(row==n){
               ok=false;
              }
              if(ok){
               row++;
              }
              else{
               row--;
              }
          }
          for(i=1;i<=n;++i){
            cout<<v[i];
          }
          cout<<endl;
     }
}
/// ALHAMDULILLAH



