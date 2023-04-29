#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int c=0,d=0,n,i;
    cin>>n;
    for(i=1;i<=n;i++){
     if(i%2==0){
          c++;
     }
     else{
          d++;
     }
    }
    cout<<c*d<<endl;
}

