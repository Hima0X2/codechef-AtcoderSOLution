#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int a[10000],n,t,x,i,c=0;
     cin>>t;
     while(t--){
               c=0;
          cin>>n;
          for(i=0;i<n;i++){
               cin>>a[i];
          }
          for(i=1;i<n;i++){
              if((a[i]/a[i-1])>2){
                    //cout<<a[i-1]/a[i]<<endl;
               c++;
              }
          }
     cout<<c<<endl;
     }
}
