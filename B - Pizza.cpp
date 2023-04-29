/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e7+123;
long long int a[mx];
int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,n,mx=INT_MIN,sum=0;
    cin>>n;
    vector<long long int> v;
    v.push_back(0);
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum=(sum+a[i])%360;
        v.push_back(sum);
    }
    v.push_back(360);
    sort(v.begin(),v.end());
    for(i=1; i<v.size(); i++)
    {
        mx=max(mx,v[i]-v[i-1]);
    }
    cout<<mx<<endl;
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




