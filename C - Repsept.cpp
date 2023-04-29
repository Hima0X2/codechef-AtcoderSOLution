#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,c=1;
     cin>>n;
     if(n<7){
          cout<<-1<<endl;
          return 0;
     }
     long long int a[]={7,77,777,7777,77777,777777,7777777,77777777,777777777,7777777777};
    // cout<<sizeof(a)<<endl;
     for(long long int i=0;i<sizeof(a)/8;i++){
          if((a[i]%n)!=0){
               c++;
          }
          else{
               break;
          }
     }
     cout<<c<<endl;
}

