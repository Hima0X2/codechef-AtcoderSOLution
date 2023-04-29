#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s1,s2,s3;
     cin>>s1>>s2>>s3;
     int a,b,c;
     a=s1.length();
      b=s2.length();
       c=s3.length();
       if(s1[a-1]==s2[0]&&s2[b-1]==s3[0])
       {
          cout<<"YES\n";
       }
       else{
          cout<<"NO\n";
       }
}
