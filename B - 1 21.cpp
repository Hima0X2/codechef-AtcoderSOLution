#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
     int i,d;
   string a,b;
   cin>>a>>b;
  d=stoi(a+b);
  for(i=1;i<=1000;i++){
     if(d==i*i){
          cout<<"Yes\n";
          return 0;
     }
  }
   cout<<"No\n";
}

