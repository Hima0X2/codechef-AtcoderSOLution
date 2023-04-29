#include<bits/stdc++.h>
using namespace std;
int main() {
  string n,t;
  int i,a,b,c=0,j;
  cin>>n>>t;
  a=n.length();
  b=t.length();
  for(i=0,j=0;i<a,j<b;i++,j++){
     if(n[i]!=t[j]){c++;}
  }
  cout<<c<<endl;
}

