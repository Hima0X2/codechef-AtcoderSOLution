#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,s,d,i,x[10000],y[100000];
     cin>>n>>s>>d;
     for(i=0;i<n;i++){
          cin>>x[i]>>y[i];
     }
     for(i=0;i<n;i++){
     if(x[i]>=s||y[i]<=d){
          continue;
     }
     else{
          cout<<"Yes"<<endl;
          return 0;
     }
     }
     cout<<"No"<<endl;
}
