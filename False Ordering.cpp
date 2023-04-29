/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
     long long int t,i,n,j;
    vector<long long int> v[n+1];
for(i=1;i<=1000;i++){
     long long int c=0;
   for(j=1;j<=sqrt(i);j++){
     if(i%j==0){
          c++;
          if(i/j!=j){
              c++;
          }
     }
   }
   v[c].push_back(i);
}
vector<long long int> p;
for(i=1;i<=v[].size();i++){
     for(j)
}
for()
     cin>>t;
     int d=0;
     while(t--){
 cin>>n;
cout<<"Case "<<d++<<": "<<v[n]<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH


