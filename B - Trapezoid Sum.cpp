#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,i,sum=0;
     cin>>n;
     long long int a,b;
     while(n--){
          cin>>a>>b;
          sum=sum+(((b*(b+1))/2)-((a*(a-1))/2));
     }
     cout<<sum<<endl;
}

