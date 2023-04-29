#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,i;
     cin>>n;
     long long int a;
     for(i=0;i<n;i++){
          cin>>a;
          if(a%2==0){
               if(!(a%3==0||a%5==0)){
                    cout<<"DENIED\n";
                    return 0;
               }
          }
     }
     cout<<"APPROVED\n";
}

