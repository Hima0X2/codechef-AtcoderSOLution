#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i;
    double sum=0;
    cin>>n;
    double a[n];
    for(i=0;i<n;i++){
     cin>>a[i];
     sum=sum+(1/a[i]);
    }
    cout<<1/sum<<endl;
}

