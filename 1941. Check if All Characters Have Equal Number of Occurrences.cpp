#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
     string s;
     cin>>s;
     map<char, int> mp;
     for(auto u:s){
          mp[u]++;
     }
     int x=mp[s[0]];
     for(auto it=mp.begin();it!=mp.end();it++){
          if(x!=it->second){
               return false;
          }
     }
     return true;
//std::cout << std::fixed << std::setprecision(2);
}


