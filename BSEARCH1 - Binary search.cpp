#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
     optimize();
     long long int a,b,i,j,x,y;
     vector<long long int> v;
     cin>>x>>y;
     for(i=0;i<x;i++){
          cin>>a;
          v.push_back(a);
     }
     while(y--){
          cin>>b;
          int lo=lower_bound(v.begin(),v.end(),b)-v.begin();
          if(!binary_search(v.begin(),v.end(),b))cout<<"-1\n";
          else{
               cout<<lo<<"\n";
          }
     }
}
