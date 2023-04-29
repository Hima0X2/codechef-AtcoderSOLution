#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,i,sum=0;
     cin>>n;
     long long int a[n],b[n];
     for(i=0;i<n;i++){
          cin>>a[i];

     }
     for(i=0;i<n;i++){
          cin>>b[i];

     }
      for(i=0;i<n;i++){
           sum=sum+a[i]*b[i];
      }
     // cout<<sum<<endl;
     if(sum==0){
          cout<<"Yes"<<endl;
     }
     else{
          cout<<"No"<<endl;
     }
}
