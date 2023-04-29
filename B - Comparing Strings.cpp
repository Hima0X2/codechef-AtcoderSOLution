#include <bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,i;
   cin>>a>>b;
   if(a>b){
     for(i=0;i<a;i++){
          cout<<b;
     }
   }
   else{
      for(i=0;i<b;i++){
          cout<<a;
     }
   }
}

