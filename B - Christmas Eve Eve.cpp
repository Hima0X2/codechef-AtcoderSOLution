#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000],b,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
     cin>>a[i];
    }
    sort(a,a+n);
    a[n-1]=a[n-1]/2;
     for(int i=0;i<n;i++){
     sum=sum+a[i];
    }
    cout<<sum<<endl;
}


