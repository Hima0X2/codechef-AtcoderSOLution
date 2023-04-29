#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define bg begin()
#define en end()
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define ws(x) scanf("%d",&x);getchar();while(x--)
#define rep(i,b) for(i=0;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
#define endl "\n"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

const int N=1e6+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m;
string s;

int main()
{
    w(t){
        int n,k;
        cin>>n>>k;
        ll ar[n+1];
        rep(i,n-1) cin>>ar[i];
        ll ans=-1;
        i=0;
        if(ar[i]<k) ans=0;
        i++;
        while(i<n && ans<0){
            if(ar[i-1]>k)
            ar[i]+=(ar[i-1]-k);
           // cout<<i<<" "<<ar[i]<<endl;
            if(ar[i]<k) ans=i;
            else i++;
        }
        if(ans<0){
            ans=n-1+ar[n-1]/k;
        }
        cout<<ans+1<<endl;
    }
}

