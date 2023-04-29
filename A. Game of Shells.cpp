/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
long long int lcm(long long int a,long long b)
{
    return a*(b/__gcd(a,b));
}
const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
    optimize();
    long long int x,t,i,n,p,q;
    cin>>t;
    int d=1;
    while(t--)
    {
        cin>>p>>q;
        q++;
        cout<<"Case #"<<d++<<": ";
        if(p%q)
        {
            cout<<"Klee"<<endl;
        }
        else
        {
            cout<<"Jean"<<endl;
        }
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH



