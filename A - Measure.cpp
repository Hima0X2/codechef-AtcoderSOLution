#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,a,b;
   string s;
   cin>>s;
   b=s.length();
   if(b==2){cout<<s<<endl;}
   else{
     for(int i=b-1;i>=0;i--){
          cout<<s[i];
     }
     cout<<endl;
   }
}

