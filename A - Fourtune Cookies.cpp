#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int a[10],i;
     for(i=0;i<4;i++){
          cin>>a[i];
     }
     sort(a,a+4);
     if((a[0]+a[3]==a[2]+a[1])||(a[0]+a[1]+a[2]==a[3])){
          cout<<"Yes\n";
     }
     else{
          cout<<"No\n";
     }
}

