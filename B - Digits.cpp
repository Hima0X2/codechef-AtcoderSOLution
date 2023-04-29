#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,i,r,k;
    cin>>n>>k;
    r=0;
    while(n>0){
     r++;
     n=n/k;
    }
    cout<<r<<endl;
}



