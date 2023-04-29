#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int a,b,c,d;
     cin>>a>>b;
     c=abs(a-b);
     d=c%10;
     if(d==0)
     {
          c=c+1;
     }
     else
     {
          c=c-1;
     }
     cout<<c<<endl;
}

