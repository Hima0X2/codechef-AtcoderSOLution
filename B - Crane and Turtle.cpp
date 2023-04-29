#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int d,n,x,y,i;
     cin>>x>>y;
     for(i=0;i<=x;i++){
          if(2*i+4*(x-i)==y){
               cout<<"Yes\n";
               return 0;
          }
     }
     cout<<"No\n";
}

