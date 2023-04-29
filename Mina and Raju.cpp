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
const long long int mx = 1000000007;
long long int fact(long long int n){
     long long int sum=1;
     for(int i=2;i<=n;i++){
          sum=(sum*i)%mx;
     }
     return sum;
}
long long int nCr(long long int n,long long int r)
{
     return fact(n)%mx/(fact(r)%mx*fact(n-r)%mx)%mx;
}
int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int x,i,n,m,p,q,t;
    cin>>x;
    while(x--)
    {
        long long int ans=0;
        cin>>n>>m>>p>>q>>t;
        for(i=0; i<=p; i++)
        {
            ans=(ans+(nCr(n,i)%*nCr(m,i))%mx)%mx;
        }
        cout<<ans<<endl;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




