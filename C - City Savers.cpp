#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,i,d,c,sum=0;
     cin>>n;
      long long int a[n+1],b[n];
     for(i=0;i<=n;i++){
          cin>>a[i];
     }
      for(i=0;i<n;i++){
          cin>>b[i];
       if(a[i]>=b[i]){
               sum=sum+b[i];
       }
        else{
           sum=sum+a[i];
           sum=sum+min(a[i+1],b[i]-a[i]);
            a[i+1]= a[i+1]-min(a[i+1],b[i]-a[i]);
        }
      }
    cout<<sum<<endl;
}

