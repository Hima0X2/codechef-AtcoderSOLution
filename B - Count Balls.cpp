#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,a,b;
     cin>>n>>a>>b;
     if(a==0){
          cout<<0<<endl;
     }
     else if(a+b==n){
          cout<<a<<endl;
     }
     else{
          cout<<n-b<<endl;
     }
}

