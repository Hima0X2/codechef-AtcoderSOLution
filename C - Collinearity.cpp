#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,i,j,c=0;
     cin>>n;
     double a[100],b[100];
     for(i=0;i<n;i++){
          cin>>a[i]>>b[i];
     }
     long long int k=0;
     for(i=0;i<n;i++){
          for(j=i+1;j<n;j++){
                    for(k=j+1;k<n;k++){
                         if((a[i] -a[k]) * (b[j] - b[k]) == (a[j] - a[k]) * (b[i] -b[k])){
                              cout<<"Yes\n";
               return 0;
                         }
                    }
          }
     }
     cout<<"No\n";
}

