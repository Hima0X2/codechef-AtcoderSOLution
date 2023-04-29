/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const  int mx = 1e7+123;
long long phi[mx],b[mx];

void Phi(int lim)
{
    int t,i,n,j;
    for(i=1; i<=lim; i++)
    {
        phi[i]=i;
    }

    for(i=2; i<=lim; i++)
    {
        if(phi[i]==i)
        {
            for(j=i; j<=lim; j=j+i)
            {
                phi[j]=phi[j]*(i-1);
                phi[j]=phi[j]/i;
            }
        }
    }
    return;
}

void permutationCheck(int lim)
{
    int i,j,p,x;
    vector<int> v;
    for(i=21; i<=lim; i++)
    {	int a[10]= {0};
        bool ok=true;
        p=i;
        x=phi[i];
        while(p)
        {
            a[p%10]++;
            p=p/10;
        }
        while(x)
        {
            a[x%10]--;
            x=x/10;
        }
        for(j=0; j<10; j++)
        {
            if(a[j]!=0)
            {
                ok=false;
                break;
            }
        }
        if(ok)
        {
            v.push_back(i);
        }
    }

    b[22]=21;
    long long m=21,n=phi[21],z=0;

    for(i=22; i<=lim; i++)
    {
        if(i>v[z] && z<v.size())
        {
            long long a=1LL*n*v[z],c=1LL*m*phi[v[z]];
            if(a<=c)
            {
                n=phi[v[z]];
                m=v[z];
                b[i]=v[z];
            }
            else
            {
                b[i]=b[i-1];
            }
            z++;
        }
        else
        {
            b[i]=b[i-1];
        }
    }
}

int main()
{
    optimize();

    int lim=1e7;
    int t,i,n;
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    Phi(lim);
    permutationCheck(lim);

    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<22)
        {
            cout<<"No solution.\n";
            continue;
        }
        else
        {
            cout<<b[n]<<endl;
        }
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH
