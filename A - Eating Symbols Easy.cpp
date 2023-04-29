#include<bits/stdc++.h>
using namespace std;
int main()
{
     int sum=0;
     string s;
     cin>>s;
     for(int i=0;i<s.length();i++){
          if(s[i]=='+')sum++;
          else sum--;
     }
     cout<<sum<<endl;
}

