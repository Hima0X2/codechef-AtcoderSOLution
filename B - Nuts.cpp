#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,i,sum=0;
     cin>>n;
     long long int a;
     for(i=0;i<n;i++){
          cin>>a;
          if(a-10<=0){
               sum=sum+0;
          }
          else{
               sum=sum+(a-10);
          }
     }
     cout<<sum<<endl;
}

