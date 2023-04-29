#include<bits/stdc++.h>
using namespace std;
bool prime(long long int n){
     int i;
     if(n<1){
          return false;
     }
     else{
          for(i=2;i*i<n;i++){
               if(n%i==0){
                    return false;
               }
          }
     }
    return true;
}
int main()
{
     long long int n;
     cin>>n;
     while(prime(n)==false){
          n++;
     }
     cout<<n<<endl;
}

