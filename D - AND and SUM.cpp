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
    long long int t,i,a,s,n;
    cin>>t;
    while(t--)
    {
        bool ok=true;
        cin>>a>>s;
        n=s-a;
        if(n<0)
        {
            cout<<"No\n";
            continue;
        }
        bitset<64> b;
        bitset<64> c;
        b=n;
        c=a;
        for(i=0; i<64; i++)
        {
            if(c[i]!=b[i]&&c[i]==1)
            {
                ok=false;
                break;
            }
        }
        if(ok){
          cout<<"Yes\n";
        }
        else{
          cout<<"No\n";
        }
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




