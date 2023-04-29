#include<bits/stdc++.h>
using namespace std;
int main()
{
string s,t;
int i;
cin>>s>>t;
if(s==t){
     cout<<"same\n";
     return 0;
}
for(i=0;i<s.size();i++){
     s[i]=tolower(s[i]);
}
for(i=0;i<t.size();i++){
     t[i]=tolower(t[i]);
}
if(s==t){
      cout<<"case-insensitive\n";
}
else{
 cout<<"different\n";
}
}

