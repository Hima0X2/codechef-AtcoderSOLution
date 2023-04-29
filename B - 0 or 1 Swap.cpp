#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,i,c=0;
     cin>>n;
     long long int a[n],b[n];
     for(i=0;i<n;i++){
          cin>>a[i];
          b[i]=a[i];
     }
     sort(a,a+n);
     for(i=0;i<n;i++){
         if(b[i]!=a[i]){
          c++;
         }
     }
     if(c>2){
          cout<<"NO\n";
     }
     else{
          cout<<"YES\n";
     }
}

