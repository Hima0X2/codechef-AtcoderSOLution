#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define LL long long
#define sl(n) scanf("%lld", &n)
#define sf(n) scanf("%lf", &n)
#define si(n) scanf("%d", &n)
#define sch(n) scanf(" %c", &n)
#define ss(n) scanf("%s", n)
#define pii pair <int, int>
#define pll pair <ll, ll>
#define plp pair <int, pll >
#define pb push_back
#define fr first
#define sc second
#define all(a)  a.begin(),a.end()
#define Unique(a)  sort(all(a)),a.erase(unique(all(a)),a.end())

#define inf (1LL<<50)
#define eps 1e-9

ll Set(ll n, ll pos)
{
    return n|(1LL<<pos);
}

bool Check(ll n, ll pos)
{
    return (bool) (n&(1LL<<pos));
}

char s[4][4];

ll dp[2][8][8][8];

ll solve(bool pl, ll row1, ll row2, ll row3)
{
    if (row1 == 7 || row2 == 7 || row3 == 7 || (Check(row1, 0) && Check(row2, 1) && Check(row3, 2)) || (Check(row1, 2) && Check(row2, 1) && Check(row3, 0)))
    {
        if (pl == 1)
            return 0;
        else return 1;
    }

    if ((Check(row1, 0) && Check(row2, 0) && Check(row3, 0)) || (Check(row1, 1) && Check(row2, 1) && Check(row3, 1)) || (Check(row1, 2) && Check(row2, 2) && Check(row3, 2)))
    {
        if (pl == 1)
            return 0;
        else return 1;
    }

    ll &ret = dp[pl][row1][row2][row3];

  // cout << pl << "\n" << bitset<3>(row1) << "\n" << bitset<3>(row2) << "\n" << bitset<3>(row3) << endl << ret << endl;

    if (ret != -1)
        return ret;

    if (!pl)
        ret = 0;
    else ret = 1;

    for (ll i = 0; i < 3; i++)
    {
        if (!Check(row1, i))
        {
             if (!pl)
                ret = max(ret, solve(pl^1, Set(row1, i), row2, row3));
            else ret = min(ret, solve(pl^1, Set(row1, i), row2, row3));
        }
    }
    for (ll i = 0; i < 3; i++)
    {
        if (!Check(row2, i))
        {
            if (!pl)
                ret = max(ret, solve(pl^1, row1, Set(row2, i), row3));
            else ret = min(ret, solve(pl^1, row1, Set(row2, i), row3));
        }
    }
    for (ll i = 0; i < 3; i++)
    {
        if (!Check(row3, i))
        {
            if (!pl)
                ret = max(ret, solve(pl^1, row1, row2, Set(row3,i)));
            else ret = min(ret, solve(pl^1, row1, row2, Set(row3,i)));
        }
    }

  //  cout << pl << "\n" << bitset<3>(row1) << "\n" << bitset<3>(row2) << "\n" << bitset<3>(row3) << endl << ret << endl;

    return ret;
}

int main ()
{
    //  freopen("inl.txt", "r", stdin);
    // freopen("outu.txt", "w", stdout);
    //  ios_base::sync_with_stdio(0); // no printf/scanf must be present
    ll cs = 0, ts, i, j, k, x, y, z, q, m, n;

    sl(ts);

    while(ts--)
    {
        ll r[4];

        for (i = 0; i < 3; i++)
        {
            ss(s[i]);

            r[i] = 0;

            for (j = 0; j < 3; j++)
            {
                if (s[i][j] == 'X')
                {
                    r[i] = Set(r[i], j);
                }
            }
        }

        memset(dp, -1, sizeof(dp));

        printf("Game #%lld: ", ++cs);

     //   cout << r[0] << " " << r[1] << " " << r[2] << endl;

        if (solve(0, r[0], r[1], r[2]))
            printf("Alice\n");
        else printf("Bob\n");
    }

    return 0;
