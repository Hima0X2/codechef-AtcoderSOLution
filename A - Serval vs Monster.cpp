#include <bits/stdc++.h>
using namespace std;
int main()
{
   int h,a,c=0;
   cin>>h>>a;
   while(1){
     if(h>0){
          h=h-a;
          c++;
     }
     else{break;}
   }
   cout<<c<<endl;
}


