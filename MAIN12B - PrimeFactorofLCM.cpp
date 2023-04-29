#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
long long int lcm(long long int a,long long b)
{
    return a*(b/__gcd(a,b));
}
vector<long long int> v;
const long long int mx = 1e7+123;
long long int a[mx];
void prime(long long int n)
{
     n=n+100;
    long long int i,j;
    a[1]=0;
    for(i=4; i<=n; i=i+2)
    {
        a[i]=1;
    }
    for(i=3; i<=n; i=i+2)
    {
        if(a[i])
        {
            for(j=i*i; j<=n; j=j+(i+i))
            {
                a[j]=0;
            }
        }
    }
    v.push_back(2);
    for(i=3; i<=n; i=i+2)
    {
        if(a[i])
        {
            v.push_back(i);
        }
    }
}
vector<long long> factorize (long long n)
{
    vector<long long> ret;
    for ( auto p : v )
    {
        if ( 1LL * p * p > n )
            break;

        if ( n % p == 0 )
        {
            ret.push_back (p);

            while ( n % p == 0 )
            {
                n /= p;
            }
        }
    }

    if ( n > 1 )
        ret.push_back(n);

    return ret;
}

int main()
{
    optimize();
    long long int t,i,n,a;
    long long int c=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        set<long long int> s;
        for(i=0; i<n; i++)
        {
            cin>>a;
            vector<long long> ret = factorize(a);
            for ( auto u : ret )
            {
                s.insert(u);
            }
        }
        cout << "Case #" << c << ": " << s.size() << endl;
        for ( auto u : s ) cout << u << endl;
        c++;
    }
//std::cout << std::fixed << std::setprecision(2);
}


