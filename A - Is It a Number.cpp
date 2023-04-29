#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     cin>>s;
     for(int i=0;i<3;i++){
          if(!(s[i]>='0'&&s[i]<='9')){
               cout<<"error\n";
               return 0;
          }
     }
     int j=stoi(s);
     cout<<2*j<<endl;
}

