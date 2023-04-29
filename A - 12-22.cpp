#include <bits/stdc++.h>
using namespace std;
int main()
{
  int i,c=0;
  string s;
  cin>>s;
  for(i=0;i<s.size();i++){
     if(s[i]=='2')c++;
  }
  cout<<c<<endl;
}
