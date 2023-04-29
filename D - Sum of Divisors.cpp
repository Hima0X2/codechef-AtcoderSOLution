#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
    optimize();

    long long int n,j,sum=0,i;
    cin >> n;
    for (i=1; i <= n; i++ ) {
        for (j = i; j <= n; j=j+i ) {
              // cout<<j<<" ";
            a[j]++;
        }
    }
     for (i = 1; i <= n; i++ ) {
       cout<<a[i]<<" ";
    }
    cout<<endl;
    for (i = 1; i <= n; i++ ) {
        sum =sum+( i * a[i] );
    }

    cout << sum << endl;

}
