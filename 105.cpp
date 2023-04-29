#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,j,i,c=0,d=0;
     cin>>n;
    for(i=1;i<=n;i=i+2){
          c=0;
     for(j=1;j<=i;j++){
          if(i%j==0){
               c++;
          }
     }
     if(c==8){
          d++;
     }
    }
 cout<<d<<endl;
}

