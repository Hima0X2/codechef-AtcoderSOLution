#include <bits/stdc++.h>
using namespace std;
int main()
{
  int i,h,n,sum=0,a;
  cin>>h>>n;
  for(i=0;i<n;i++){
     cin>>a;
     sum=sum+a;
  }
  if(sum>=h){
     cout<<"Yes\n";
  }
  else{
     cout<<"No\n";
  }
}



