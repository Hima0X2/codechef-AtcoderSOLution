#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,p;
     cin>>n;
     string s,t;
     cin>>s;
     for(int i=0;i<s.length();i++){
               p=s[i]+n;
          if(p>90){
          s[i]=char(s[i]-26+n);
     }
     else{
          s[i]=char(s[i]+n);
     }
     }
     cout<<s<<endl;
}
