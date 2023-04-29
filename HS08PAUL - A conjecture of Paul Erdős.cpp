#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int MX = 1e7+123;

int ans[MX];
bitset<MX> is_prime;
vector<int> prime;

void primeGen ( int n )
{
    n += 100;
    for ( int i = 3; i <= n; i += 2 ) is_prime[i] = 1;

    int sq = sqrt ( n );
    for ( int i = 3; i <= sq; i += 2 ) {
        if ( is_prime[i] == 1 ) {
            for ( int j = i*i; j <= n; j += ( i + i ) ) {
                is_prime[j] = 0;
            }
        }
    }

    is_prime[2] = 1;
    prime.push_back (2);

    for ( int i = 3; i <= n; i += 2 ) {
        if ( is_prime[i] == 1 ) prime.push_back ( i );
    }
}

int main()
{
    optimize();

    int lim = 1e7;
    primeGen ( lim );

    for ( int x = 1; x <= 3200; x++ ) {
        for ( int y = 1; y <= 60; y++ ) {
            int d = ( x * x ) + ( y * y * y * y );
            if ( d > lim ) continue;
            if ( is_prime[d] ) ans[d] = 1;
        }
    }

    for ( int i = 1; i <= lim; i++ ) ans[i] += ans[i-1];

    int t;
    cin >> t;

    while ( t-- ) {
        int n;
        cin >> n;
        cout << ans[n] << endl;
    }

    return 0;
}
