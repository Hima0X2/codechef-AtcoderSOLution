#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,i,c=0;
     cin>>n;
     for(i=1;i<=n;i++){
          int d=log10(i)+1;
          if(d%2){
              c++;
          }
     }
     cout<<c<<endl;
}


