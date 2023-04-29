#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int x;
     cin>>x;
    long long int d=100,c=0;
     while(d<x){
         d=d+(d/100);
          c++;
     }
     cout<<c<<endl;
}

