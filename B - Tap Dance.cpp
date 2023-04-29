#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  bool flag=false;
  cin>>s;
  for(int i=0;i<s.size();i++){
  if(i%2==0){
     if(s[i]=='R'||s[i]=='U'||s[i]=='D'){
          flag=true;
     }
     else{
          flag=false;
          break;
     }
  }
  else{
         if(s[i]=='L'||s[i]=='U'||s[i]=='D'){
          flag=true;
     }
      else{
          flag=false;
          break;
     }
     }
  }
  if(flag==true){
     cout<<"Yes\n";
  }
  else{
     cout<<"No\n";
  }
}




