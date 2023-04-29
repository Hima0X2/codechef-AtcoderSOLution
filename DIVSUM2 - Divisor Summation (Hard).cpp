#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int MX = 1e8+123;
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


long long int SOD (long long int n) // 4
{
    long long int ret = 1;
    for ( auto p : prime ) {
        if ( 1LL * p * p > n ) break;

        if ( n % p == 0 ) {
            long long int pwP = p; // pwP = 2^3

            while ( n % p == 0 ) {
                pwP *= p;
                n /= p;
            }

            ret *= ( ( pwP - 1 ) / ( p - 1 ) );
        }
    }

    if ( n > 1 ) {
        ret *= ( n + 1 );
    }

    return ret;
}


int main()
{
    optimize();

    int lim = 1e8;

    primeGen(lim);

    int t;
    cin >> t;

    while (t--) {
        long long int n;
        cin >> n;
        cout << SOD (n) - n << endl;
    }

    return 0;
}
