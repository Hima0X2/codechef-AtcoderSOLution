#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,b,d;
     cin>>a>>b;
     d=a+b;
     if(d>=15&&b>=8)cout<<1<<endl;
     else if(d>=10&&b>=3)cout<<2<<endl;
     else if(d>=3)cout<<3<<endl;
     else cout<<4<<endl;
}
