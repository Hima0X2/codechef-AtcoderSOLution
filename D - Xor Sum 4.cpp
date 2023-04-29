/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e7+123;
long long int z=1e9+7;
long long int a[mx];
long long int pw(long long int b,long long int p){
     if(p==0) return 1;
     if(p%2) return ((b*pw(b,p-1))%z);
     else{
          long long int k=pw(b,p/2);
          return ((k*k)%z);
     }
}
int main()
{
     optimize();
     long long int t,i,n,c0,c1,j,sum=0,x;
     cin>>n;
    for(i=0;i<n;i++){
     cin>>a[i];
    }
   for(i=0;i<60;i++){
     c0=0,c1=0,x=1;
      for(j=0;j<n;j++){
          if((a[j]>>i)&1){
               c1++;
          }
          else{
             c0++;
          }
     }
     long long int p=(c0*c1)%z;
      sum=(sum+(pw(2,i)*p)%z)%z;
     // cout<<p<<endl;
    }
    cout<<sum%z<<endl;
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH
