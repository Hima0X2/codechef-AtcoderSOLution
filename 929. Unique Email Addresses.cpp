#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
 long long int i,j,p;
 string s[1000],local,domain;
 //vector<string> emails[100];
 for(i=0;i<3;i++){
          cin>>s[i];
          //emails[i].push_back(s[i]);
 }
set<string> se;
for(i=0;i<3;i++){
          for(j=0;j<s[i].length();j++){
        if(s[i][j]=='@'){
           local=s[i].substr(0,j);
         // cout<<local<<endl;
        }
        else if(s[i][j-1]=='@'){
           domain=s[i].substr(j);
         //cout<<domain<<endl;
          int j=0;
          j=local.find("+");
          if(j){
            local = local.substr(0,local.find("+"));
        }
        //local.replace(".","");
        }
          }
          local.erase(remove(local.begin(),local.end(), '.'),local.end());
         // cout<<local<<endl;
         se.insert(local+domain);
 }
 cout<<se.size()<<endl;
}


