#include<bits/stdc++.h>
using namespace std;
long long int pw(long long int b,long long int p){
     if(p==0) return 1;
     if(p%2) return ((b*pw(b,p-1)))%10;
     else{
          long long int k=pw(b,p/2)%10;
          return ((k*k))%10;
     }
}
int main()
{
     long long int t,i,n,k;
     cin>>t;
     while(t--){
cin>>n>>k;
cout<<pw(n,k)%10<<endl;
     }
}
