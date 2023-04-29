#include<bits/stdc++.h>
using namespace std;
const long long int mx = 1e7+123;
long long int a[mx];
int main()
{
    long long int t,n,i,sum=0;
    cin>>t;
    int e=0;
    while(t--)
    {
        sum=0;
        long long int d=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            sum=sum+a[i];
            if(sum<=0)
            {
                // cout<<sum<<endl;
                d=abs(sum)+1+d;
                sum=1;
            }
        }
        if(d==0)
        {
            cout<<"Scenario #"<<++e<<": "<<1<<endl;
        }
        else
        {
            cout<<"Scenario #"<<++e<<": "<<d<<endl;
        }
    }
}
