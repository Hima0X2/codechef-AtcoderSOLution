#include<bits/stdc++.h>
using namespace std;
int main(){
  string s1,s2;
  cin >> s1 >> s2;
  if(s1=="#." && s2==".#"){cout << "No\n";}
  else if(s1==".#" && s2=="#."){cout << "No\n";}
  else{cout << "Yes\n";}
  return 0;
}
