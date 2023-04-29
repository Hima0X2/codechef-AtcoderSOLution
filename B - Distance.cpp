#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int d,n,a,b,sum,c=0;
     cin>>n>>d;
     while(n--){
          cin>>a>>b;
          sum=(a*a+b*b);
          if(sum<=(d*d)){
               c++;
          }
     }
     cout<<c<<endl;
}
