#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,i,a[10000],b[100000],mx=0,mn;
     cin>>n;
     for(i=0;i<n;i++){
          cin>>a[i];
          mx=max(mx,a[i]);
     }
    // cout<<mx<<endl;
     for(i=0;i<n;i++){
          cin>>b[i];
     }
     mn=b[0];
       for(i=1;i<n;i++){
          mn=min(mn,b[i]);
     }
     //cout<<mn<<endl;
     if((mx-mn)>0){
          cout<<0<<endl;
     }
     else{
          cout<<(mn-mx)+1<<endl;
     }
}
