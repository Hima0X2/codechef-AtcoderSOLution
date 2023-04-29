/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e7+123;
long long int a[mx],b[mx],cnt[mx];
int main()
{
    optimize();
    long long int t,i,n;
    cin>>t;
    for(i=0; i<t-1; i++)
    {
        cin>>a[i];
        cin>>b[i];
        cnt[a[i]]++;
        cnt[b[i]]++;
    }
    //cout<<cnt[4]<<endl;
    for(i=1;i<=t;i++){
     if(cnt[i]==(t-1)){
          cout<<"Yes\n";
          return 0;
     }
    }
    cout<<"No\n";
}
/// ALHAMDULILLAH




