#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int i,n,c=1;
     string s,u,v,w,x;
     cin>>s;
     n=s.length();
     string t=s;
     reverse(s.begin(),s.end());
     if(s==t){
         u=s.substr(0,(n-1)/2);
         v=u;
           w=s.substr(((n+3)/2)-1,n);
         x=w;
         reverse(u.begin(),u.end());
         reverse(w.begin(),w.end());
         //cout<<u<<" "<<w<<endl;
         if(v==u&&x==w){
               cout<<"Yes\n";
               return 0;
         }
     }
  cout<<"No\n";
}
