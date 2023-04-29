#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,i,x,sum;
     string s;
     cin>>n>>x;
     cin>>s;
     sum=x;
     //int d=s.length();
     for(i=0;i<n;i++){
          if(s[i]=='o'){
               sum++;
          }
          else{
               sum--;
          }
       if(sum<0)sum=0;
     }
     cout<<sum<<endl;
}
