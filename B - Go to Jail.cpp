#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,i,n,b,f,c=0,d=0;
    cin>>n;
    for(i=0;i<n;i++){
          cin>>b>>f;
     if(b==f)
     {
          c++;
          if(c>d){
               d=c;
          }
     }
     else{
          c=0;
     }
    }
    //cout<<d<<endl;
    if(d>=3){
     cout<<"Yes\n";
    }
    else{
     cout<<"No\n";
    }
}

