#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,n,sum,rev=0,i,j;
     string s;
     cin>>s;
     n=s.length();
    // cout<<n<<endl;
  while(n!=0&&s[n-1]=='0'){
     n--;
   }
  // cout<<n<<endl;
   i=0;
   j=n-1;
   //cout<<i<<" "<<j<<endl;
   while(i<=j){
          //cout<<s[i]<<" "<<s[j]<<endl;
     if(s[i]!=s[j]){
          cout<<"No\n";
          return 0;
     }
     j--;
     i++;
   }
          cout<<"Yes\n";
}
