#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,q,l,r,i,c=0;
     string s;
     long long int d[100000];
     cin>>n>>q;
     cin>>s;
     d[0]=0;
     for(i=0;i<n;i++){
               d[i+1]=(tolower(s[i])-'a')+1+d[i];
     }
     //cout<<d<<endl;
     while(q--){
          cin>>l>>r;
          cout<<d[r]-d[l-1]<<endl;
     }
}
