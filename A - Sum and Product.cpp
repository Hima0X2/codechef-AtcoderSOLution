#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int i,s,p,j;
     cin>>s>>p;
     for(i=1;;i++){
               if(i*(s-i)==p){
                    cout<<"Yes\n";
                    return 0;
               }
       if(i*(s-i)>p){break;}
          }
     cout<<"No\n";
}

