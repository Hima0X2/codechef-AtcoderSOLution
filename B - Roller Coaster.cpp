#include <bits/stdc++.h>
using namespace std;
int main()
{
  int i,c=0,n,k,h;
  cin>>n>>k;
  for(i=0;i<n;i++){
     cin>>h;
     if(h>=k){c++;}
  }
  cout<<c<<endl;
}


