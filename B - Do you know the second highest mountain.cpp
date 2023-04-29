#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,t;
  cin>>n;
  string s;
  map<long long int,string> mp;
  map<long long int,string>::iterator it;
  while(n--){
     cin>>s>>t;
     mp[t]=s;
  }
  string s1,s2="";
  for(it=mp.begin();it!=mp.end();it++){
     s1=s2;
     s2=it->second;
  }
  cout<<s1<<endl;
}

