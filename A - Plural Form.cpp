#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     cin>>s;
     int d;
     d=s.length();
     if(s[d-1]=='s'){
          cout<<s+"es"<<endl;
     }
     else{
           cout<<s+"s"<<endl;
     }
}

