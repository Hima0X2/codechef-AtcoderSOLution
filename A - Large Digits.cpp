#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int a,b,i,n;
     cin>>a>>b;
     int digit=0,digit1=0;
     while(a!=0){
               digit=digit+a%10;
          a=a/10;
     }
      while(b!=0){
               digit1=digit1+b%10;
          b=b/10;
     }
cout<<max(digit,digit1)<<endl;
}
