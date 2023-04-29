#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,i,j,k,c=0;
     cin>>n;
      long long int a[n];
    for(i=0;i<n;i++){
          cin>>a[i];
     }
      for(i=0;i<n;i++){
         for(j=i+1;j<n;j++){
                if(abs(a[i]-a[j])%200==0){
                    c++;
                }
     }
      }
      cout<<c<<endl;
}
