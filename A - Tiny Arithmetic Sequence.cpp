#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,a[3];
     for(i=0;i<3;i++){
         cin>>a[i];
     }
     sort(a,a+3);
     int d=a[1]-a[0];
     int e=a[2]-a[1];
     if(d==e){
          cout<<"Yes\n";
     }
     else{
          cout<<"No\n";
     }
}
