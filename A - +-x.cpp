#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int k,n,a,b,l;
     cin>>a>>b;
     n=a+b;
     k=a-b;
     l=a*b;
     cout<<max(n,max(k,l))<<endl;
}


