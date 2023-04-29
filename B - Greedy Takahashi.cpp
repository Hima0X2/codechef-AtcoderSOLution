#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int a,b,k,c,p=0;
     cin>>a>>b>>k;
     c=a+b;
    if(k<=a){
     cout<<a-k<<" "<<b<<endl;
   }
   else{
     cout<<0<<" "<<max(c-k,p)<<endl;
   }
}
