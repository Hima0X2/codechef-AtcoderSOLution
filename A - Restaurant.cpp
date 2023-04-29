#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,sum,t;
     cin>>n;
     t=200*(n/15);
     sum=800*n;
     //cout<<n%15<<endl;
     //cout<<sum<<" "<<t<<endl;
     cout<<sum-t<<endl;
}
