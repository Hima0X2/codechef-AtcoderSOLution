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
     long long int a,b,c,rema,remb,remc,cnt=0;
     cin>>a>>b>>c;
     long long int i=1;
     while(a!=0||b!=0||c!=0){
       rema=a&1;
      remb=b&1;
      remc=c&1;
      if((rema|remb)!=remc){
          if(rema==1&&remb==1){
               cnt=cnt+2;
          }
          else{
               cnt++;
          }
      }
      a>>=1;
      b>>=1;
      c>>=1;
     }
     cout<<cnt<<endl;
}
/// ALHAMDULILLAH



