#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,b,c=0,a;
   cin>>n;
    map<long long int,long long int> mp;
   for(a=2;a*a<=n;a++){
   for(b=2; ;b++){
     if(pow(a,b)<=n){
          if(mp[pow(a,b)]==0){
             //  cout<<pow(2,i)<<endl;
          c++;
          mp[pow(a,b)]++;
          }
     }
     else{
          break;
     }
   }
   }
   cout<<(n-c)<<endl;
}

