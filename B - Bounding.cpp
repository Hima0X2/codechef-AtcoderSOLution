#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,x,a,i,sum=0,c=1;
     cin>>n>>x;
     for(i=0;i<n;i++){
          cin>>a;
          sum=sum+a;
          if(sum<=x)c++;
     }
     cout<<c<<endl;
}

