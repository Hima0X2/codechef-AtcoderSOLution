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
long long int a[mx];
int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,a,b;
    cin>>t;
    while(t--)
    {
        bool ok=true;
        cin>>a>>b;
        long long int m,n,o,p;
        if(__gcd(a,a+2)>1&&(a+2)<=b)
        {
            ok=false;
            cout<<a<<" "<<a+2<<endl;
        }
        else if(__gcd(a,a+3)>1&&(a+3)<=b)
        {
            ok=false;
            cout<<a<<" "<<a+3<<endl;
        }
        else if(__gcd(a+1,a+3)>1&&(a+3)<=b)
        {
            ok=false;
            cout<<a+1<<" "<<a+3<<endl;
        }
        if(ok)
        {
            cout<<-1<<endl;
        }
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




