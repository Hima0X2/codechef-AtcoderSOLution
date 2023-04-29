#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y,z;
     cin>>x>>y>>z;
     double p=(z/x)*y;
    // cout<<p<<endl;
    // cout<<(long)p<<endl;
   if(p==(long)p){
          cout<<p-1<<endl;
     }
     else{
          cout<<(int)p<<endl;
     }
}
