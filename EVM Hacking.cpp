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
const long long int mx = 1e7+123;
long double a[mx];
int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long double t,i,n,c,p,q,r;
    cin>>t;
    while(t--)
    {
        cin>>a[0]>>a[1]>>a[2]>>p>>q>>r;
       long double x=(p+q+r)/2;
      long double b=max(a[1]+a[2]+p,max(a[0]+a[2]+q,a[0]+a[1]+r));
       // cout<<b<<" "<<x<<endl;
        if(b>x)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH
