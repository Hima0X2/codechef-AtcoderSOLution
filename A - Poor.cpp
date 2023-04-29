#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,b,c,sum=0;
     cin>>a>>b>>c;
     if(a==b)sum++;
     if(b==c)sum++;
     if(c==a)sum++;
     if(sum==1)cout<<"Yes\n";
     else cout<<"No\n";
}
