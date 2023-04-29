#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,i,l,j,c=0,z;
     cin>>n;
     string s;
     cin>>s;
     if(n%2!=0){
               cout<<"No\n";
                c=1;
     }
     else{
          z=n/2;
          for(i=0,j=z;i<z,j<n;i++,j++){
               //cout<<i<<" "<<j<<endl;
                   // cout<<s[i]<<s[j]<<endl;
               if(s[i]!=s[j])
               {
                   // cout<<1;
                    c=1;
                    cout<<"No\n";
                   break;
               }
          }
         if(c!=1) cout<<"Yes\n";
     }
}

