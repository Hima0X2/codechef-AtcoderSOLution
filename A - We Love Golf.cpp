#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,a,b,i;
    cin>>k;
    cin>>a>>b;
    for(i=a;i<=b;i++){
     if(i%k==0){cout<<"OK\n";
     return 0;}
    }
    cout<<"NG\n";
}
