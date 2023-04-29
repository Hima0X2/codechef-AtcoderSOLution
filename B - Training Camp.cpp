#include<bits/stdc++.h>
#define p 1e9 + 7
#define ll long long int
using namespace std;
int main()
{
     long long int n,f=1;
     cin>>n;
    // cout<<(ll)p;
     for(int i=1;i<=n;i++){
          f=f*i;
           f=f%(ll)p;
     }
     cout<<f<<endl;
}

