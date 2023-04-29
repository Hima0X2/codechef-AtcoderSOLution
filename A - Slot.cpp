#include<bits/stdc++.h>
using namespace std;
int main()
{
     int d=0;
     string s;
     cin>>s;
     for(int i=1;i<3;i++){
          if(s[i]==s[i-1]){d++;}
          else{
               d=0;
               break;
          }
     }
     if(d==0){cout<<"Lost"<<endl;}
     else{
          cout<<"Won"<<endl;
     }
}
