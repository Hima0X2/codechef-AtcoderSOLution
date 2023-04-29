#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s,t;
     cin>>s>>t;
    int d=t.length();
    t=t.substr(0, d-1);
     if(s.compare(t)==0){cout<<"Yes\n";}
     else{cout<<"No\n";}
}
