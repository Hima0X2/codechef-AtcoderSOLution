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
     cin>>n;
     string s;
     cin>>s;
     vector<long long int> v;
     x=2;
     y=s.size()+1;
     v.push_back(1);
     for(i=0;i<s.size();i++){
          if(s[i]=='I'){
               v.push_back(x);
               x++;
          }
          else{
               v.push_back(x);
               x++;
          }
     }
     for(i=0;i<v.size();i++){
          cout<<v[i]<<" ";
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




