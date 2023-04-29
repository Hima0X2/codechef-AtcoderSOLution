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
    long long int t,i,n,a,b,c,d;
    long long int x,y;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        x=a*d,y=b*c;
        if(x==y)
        {
            cout<<0<<endl;
        }
        else if((x!=0&&y%x==0)||(y!=0&&x%y==0))
        {
          cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




