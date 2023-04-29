#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int a,b,c,d,p=0,i,sum=0,sub=0;
cin>>a>>b>>c>>d;
sum=a;
if(b>=c*d){
     cout<<-1<<endl;
}
else{
   while(sum>sub*d){
    sum=sum+b;
    sub=sub+c;
     p++;
    }
   cout<<p<<endl;
}
}

