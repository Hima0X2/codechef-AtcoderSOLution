#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,i;
     cin>>n;
     long long int a[n],b[n],c[n],mn=100000,mx1,mx2;
     for(i=0;i<n;i++){
          cin>>a[i]>>b[i];
          c[i]=b[i];
     }
     mx1=a[0];
      mx2=b[0];
      for(i=0;i<n;i++){
          mn=min(mn,a[i]+b[i]);
          mx1=min(mx1,a[i]);
            mx2=min(mx2,b[i]);
     }
   // cout<<mn<<" "<<mx1<<" "<<mx2<<endl;
     sort(c,c+n);
     int j=1;
      for(i=0;i<n;i++){
           if(a[i]==mx1&&b[i]==mx2){
               mx2=c[j];
               j++;
          //  cout<<mx2<<endl;
           }
      }
      // cout<<mn<<endl;
      //cout<<max(mx1,mx2)<<endl;
     if(mn<max(mx1,mx2)){
          cout<<mn<<endl;
     }
     else{
          cout<<max(mx1,mx2)<<endl;
     }
}
