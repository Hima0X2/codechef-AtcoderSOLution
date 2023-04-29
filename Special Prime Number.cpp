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
bool prime(int n)
{
    if(n<=1)
        return 0;
    for(int i=2; i*i<n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,sum=0;
    string n;
    cin>>n;
    string s=n;
    reverse(n.begin(),n.end());
    bool b=prime(stoi(n));
    bool c=prime(stoi(s));
    if(b&&c)
    {
        cout<<"Yes\n";
    }
    else
    {
          cout<<"No\n";
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




