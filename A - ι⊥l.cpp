#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int a[3],i;
     for(i=0;i<3;i++){
          cin>>a[i];
     }
     sort(a,a+3);
     if(a[2]-a[1]==a[1]-a[0]){cout<<"YES\n";}
     else{cout<<"NO\n";}
}
