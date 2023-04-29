#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,t,i,c=1;
     cin>>t;
     while(t--){
               c=1;
          cin>>n;
          long long int a[n];
          for(i=0;i<n;i++){
               cin>>a[i];
                 if(a[i]<0){
                    c=0;
               }
          }
        if(!c){
          cout<<"NO\n";
        }
        else{
               cout<<"YES\n";
          sort(a,a+n);
          cout<<a[n-1]+1<<endl;
          for(i=0;i<=a[n-1];i++){
               cout<<i<<" ";
          }
          cout<<endl;
        }
     }
}

