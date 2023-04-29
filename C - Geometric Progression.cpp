#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int a,r,n,j,sum;
   cin>>a>>r>>n;
   sum=a;
   for(j=0;j<n-1;j++){
     sum=sum*r;
   }
   if(sum>1000000000){
     cout<<"large\n";
   }
   else{
     cout<<sum<<endl;
   }
}

