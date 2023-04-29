#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     long long int x=0;
     cin>>s;
     for(int i=0;i<s.size();i++)
     {
          if(s[i]=='.'){
               break;
          }
          else{
                      cout<<s[x];
               x++;
          }
     }
   cout<<endl;
}
