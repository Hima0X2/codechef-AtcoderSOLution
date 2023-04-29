/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
     long long int t,i,n,j,c=0;
     string r,s,u;
     cin>>t;
     map<string,int> mp;
    for(i=0;i<t;i++){
      cin>>r>>s;
      u=r+' '+s;
      mp[u]++;
      if(mp[u]>1){
                    c=1;
                }
     }
     if(c){
          cout<<"Yes\n";
     }
     else{
      cout<<"No\n";
     }
}
/// ALHAMDULILLAH



