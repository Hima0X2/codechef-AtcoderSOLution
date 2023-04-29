#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int x,y;
   cin>>x>>y;
   if(x==y){
     cout<<x<<endl;
   }
   else if(x==0){
     if(y==1){
          cout<<2<<endl;
     }
     else if(y==2){
          cout<<1<<endl;
     }
   }
    else if(y==0){
     if(x==1){
          cout<<2<<endl;
     }
     else if(x==2){
          cout<<1<<endl;
     }
   }
   else if(x==1&&y==2){cout<<0<<endl;}
   else if(x==2&&y==1){cout<<0<<endl;}
}

