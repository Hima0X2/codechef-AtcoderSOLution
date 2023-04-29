#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,c=0,i;
    cin>>n;
    long long int p[n];
    for(i=0;i<n;i++){
     cin>>p[i];
    }
     for(i=1;i<n-1;i++){
          if(((p[i-1]>p[i])&&(p[i+1]<p[i]))||((p[i-1]<p[i])&&(p[i+1]>p[i]))){
               c++;
          }
     }
     cout<<c<<endl;
}

