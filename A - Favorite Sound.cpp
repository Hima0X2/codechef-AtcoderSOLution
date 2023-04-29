#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,b,c,sum=0,d=0;
    cin>>a>>b>>c;
    for(int i=1;i<=c;i++){
          sum=sum+a;
     if(sum<=b){
         d++;
          continue;
     }
     else{
          break;
     }
    }
    cout<<d<<endl;
}


