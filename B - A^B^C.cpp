/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int pw(long long int b,long long int p,long long int m){
     if(p==0) return 1;
     long long int k=pw(b,p/2,m)%m;
     if(p&1) return (b*k*k)%m;
     else{
          return ((k*k))%m;
     }
}
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,a,b,c,p;
     cin>>a>>b>>c;
     p=pw(b,c,4)+4;
    cout<<pw(a,p,10)%10<<endl;
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




