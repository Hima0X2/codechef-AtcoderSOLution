#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     int x,o;
     cin>>s;
     x=0,o=0;
     for(int i=0;i<5;i++){
          if(s[i]=='o'&&s[i+1]=='o'&&s[i+2]=='o'){
              o++;
          }
          else if(s[i]=='x'&&s[i+1]=='x'&&s[i+2]=='x'){
               x++;
          }
     }
     if(x>o){
           cout<<"x\n";
     }
     else if(x<o){
           cout<<"o\n";
     }
     else{
          cout<<"draw\n";
     }
}
