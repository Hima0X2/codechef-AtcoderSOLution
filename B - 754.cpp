#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b=0,c,min=753;
  string s;
  cin>>s;
  a=s.length();
  for(int i=0;i<a;i++){
     if(s[i]=='7'){
          b=s[i]*100+s[i+1]*10+s[i+2];
          cout<<b<<endl;
          cout<<abs(b-min)<<endl;
          return 0;
     }
  }
}
