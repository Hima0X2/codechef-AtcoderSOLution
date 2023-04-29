#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int i,c=0;
   string s;
   cin>>s;
   long long int d=s.length();
   for(i=0;i<d;i++){
     if(s[i]!=s[d-i-1]){
              s[i]=s[d-i-1];
          c++;
     }
   }
   //cout<<s<<endl;
   cout<<c<<endl;
}

