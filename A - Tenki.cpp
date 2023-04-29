#include <bits/stdc++.h>
using namespace std;
int main()
{
  int d,i,c=0;
  string s,t;
  cin>>s>>t;
  for(i=0;i<3;i++){
     if(s[i]==t[i])c++;
  }
  cout<<c<<endl;
}
