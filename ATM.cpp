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
    std::cout << std::fixed << std::setprecision(2);
     long long int t,i,n,x;
     double y;
      cin>>x>>y;
      if(x%5==0){
          if(x+0.5<=y){
               cout<<(double)(y-x-0.5)<<endl;
               return 0;
          }
      }
 cout<<(double)y<<endl;
}
/// ALHAMDULILLAH




