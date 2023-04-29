/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 10000007;
long long int pw(long long int b,long long int p)
{
    if(p==0)
        return 1;
    if(p&1)
        return (b*pw(b,p-1))%mx;
    else
    {
        long long int k=pw(b,p/2);
        return ((k*k))%mx;
    }
}
int main()
{
    optimize();
    long long int t,i,n,k;
//    s[0]=0;
//    p[0]=0;
//    z[0]=0;
//    for(i=1; i<=lim; i++)
//    {
//        s[i]=(s[i-1]+pw(i,k))%mod;
//        p[i]=(p[i-1]+pw(i,i))%mod;
//        z[i]=(s[i]+p[i])%mod;
//    }
    while(1)
    {
        cin>>n>>k;
        if(n==0&&k==0)
        {
            break;
        }
        cout<<(pw(n,k)+pw(n,n)+2*(pw(n-1,k)+pw(n-1,n-1)))%mx<<endl;
    }
}
/// ALHAMDULILLAH



