// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

typedef tree< long long, null_type, less_equal<long long>, rb_tree_tag,tree_order_statistics_node_update > ordered_set;

/// cout<<*X.find_by_order(1)<<endl; // iterator to the k-th largest element
/// cout<<X.order_of_key(-5)<<endl;  // number of items in a set that are strictly smaller than our item

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

const int mx = 2e5+123;
long long a[mx], sum[mx];
int main()
{
   long long n,i,t;
   cin>>n>>t;
   //long long a[n];
   for(i=1;i<=n;i++){
     cin>>a[i];
   }
   for(i=1;i<=n;i++){
     sum[i]=sum[i-1]+a[i];
   }
   map<long long int,long long int> mp;
   ordered_set ps;

    ps.insert ( 0 );
    mp[0]++;
    long long result=0;
    for(i=1;i<=n;i++){
         result=result+(i-ps.order_of_key(sum[i]-t)-mp[sum[i]-t]);
    ps.insert(sum[i]);
    mp[sum[i]]++;
    }
    cout<<result<<endl;
}
