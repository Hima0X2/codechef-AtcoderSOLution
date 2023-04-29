#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,q,t,a,b,cnt=0;
     string s;
     cin>>n>>s;
     cin>>q;
     for(int i=0;i<q;i++){
          cin>>t>>a>>b;
          if(t==1){
               swap(s[a-1],s[b-1]);
          }
          else if(t==2){
     cnt++;
          }
     }
     if(cnt==1){
           for(int i = n-1; i >=0; i--) cout << s[i];
        for(int i = n-1; i >=0; i--) cout << s[n+i];
     }
     else if(cnt % 2 == 0)cout<<s<<endl;
    else {
          for(int i = n-1; i >=0; i--) cout << s[n+i];
        for(int i = n-1; i >=0; i--) cout << s[i];
    }
}
