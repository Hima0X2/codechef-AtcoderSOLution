#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int a,b,c;
     cin>>a>>b>>c;
     if(a==b){
          cout<<c<<endl;
     }
     else if(c==b){
          cout<<a<<endl;
     }
     else if(a==c){
          cout<<b<<endl;
     }
     else{
          cout<<0<<endl;
     }
}
