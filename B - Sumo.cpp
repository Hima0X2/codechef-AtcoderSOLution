#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,c=0,d=0;
     string s;
     cin>>s;
     n=s.length();
     for(int i=0;i<n;i++){
          if(s[i]=='x')c++;
     }
     if(c<=7)cout<<"YES\n";
     else cout<<"NO\n";
}

