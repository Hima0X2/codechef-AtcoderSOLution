#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
   for(a=1;a<10;a++)
   {
        for(b=1;b<10;b++){
          if(a*b==n){
               cout<<"Yes\n";
               return 0;
          }
        }
   }
   cout<<"No\n";
}



