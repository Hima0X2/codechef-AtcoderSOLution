#include<bits/stdc++.h>
using namespace std;
int cp(int n){
     int count=0;
 if(n<0){
     n=-n;
 }
 while(n!=0){
     if(n%10==8)count++;
     n=n/10;
 }
 return count;
}
int main()
{
     int n,d,z,c=1;
     cin>>n;
     while(1){
          n++;
          if(cp(n)>=1){break;}
           c++;
     }
     cout<<c<<endl;
}

