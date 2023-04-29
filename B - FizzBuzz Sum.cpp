#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,i,sum=0;
     cin>>n;
     for(i=1;i<=n;i++){
          if((i%3!=0)&&(i%5!=0)){
               sum=sum+i;
          }
     }
     cout<<sum<<endl;
}

