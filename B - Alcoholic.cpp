#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,x,v,p,i,j;
     double sum=0;
     cin>>n>>x;
     for(i=1;i<=n;i++){
          cin>>v>>p;
          sum=sum+v*p;
          if((sum*1.0)/100>x){
               cout<<i<<endl;
               return 0;
          }
          }
          cout<<-1<<endl;
}
