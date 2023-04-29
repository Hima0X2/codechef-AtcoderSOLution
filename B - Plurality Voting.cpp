#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     long long int a=0,b=0,c=0;
     cin>>s;
     for(int i=0;i<s.size();i++){
          if(s[i]=='a'){
               a++;
          }
          else if(s[i]=='b'){
              b++;
          }
          else{
               c++;
          }
     }
     if(a>b&&a>c){
          cout<<"a\n";
     }
     else if(a<b&&b>c){
          cout<<"b\n";
     }
     else{
          cout<<"c\n";
     }
}
