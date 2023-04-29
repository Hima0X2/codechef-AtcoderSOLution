/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b)
{
    return a*(b/__gcd(a,b));
}
const long long int mx = 1e3+123;
long long int lav[mx];
vector<long long int> adj[mx];
void bfs(int s)
{
    memset(lav,-1,sizeof(lav));
    queue<int> qu;
    qu.push(s);
    lav[s] = 0;
    while(!qu.empty())
    {
        int u=qu.front();
        qu.pop();
        for(auto v:adj[u])
        {
            if(lav[v]==-1)
            {
                lav[v] = lav[u] + 1;
                qu.push( v );
            }
        }
    }
}
int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,n,u,v,q,a;
    cin>>n;
    for(i=0; i<n-1; i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
    cin>>q;
    long long int mn=INT_MAX,d=INT_MAX;
    while(q--)
    {
        cin>>a;
        if(mn>lav[a]){
               mn=lav[a];
          d=min(d,a);
        }
    }
    cout<<d<<endl;
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




