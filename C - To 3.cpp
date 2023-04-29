#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,i,p,d,c=0;
     cin>>n;
     d=log10(n)+1;
    while(n!=0){
          p=n%10;
    if(p%3!=0){
     c++;
    }
    cout<<p<<endl;
     n=n/10;
    }
    if(c==d){
     cout<<-1<<endl;
    }
    else{
     cout<<c<<endl;
    }
}

