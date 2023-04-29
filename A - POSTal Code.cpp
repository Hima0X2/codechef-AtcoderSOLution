#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     int d,i,c=0,j;
     cin>>s;
     d=s.length();
     for(i=0;i<d;i++){
               if(s[3]=='-'){
                    c=1;
               }
          else{
               j=s[i]-'0';
               if(isdigit(j)){
                    c=1;
               }
               else{
                    c=0;
                    break;
               }
          }
     }
     if(c){
          cout<<"Yes\n";
     }
     else{
     cout<<"No\n";
     }
}
