/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,q,l,r;
     cin>>n>>q;
     long long int b,p[n+1];
     memset(p,0,sizeof(p));
     for(i=1;i<=n;i++){
          cin>>b;
           p[i]=p[i-1];
          if(b==3 || b==4 ||b==6){
                    p[i]++;
          }
     }
     while(q--){
          cin>>l>>r;
     cout<<p[r]-p[l-1]<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH
