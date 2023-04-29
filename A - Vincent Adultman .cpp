#include<bits/stdc++.h>
using namespace std;
int main()
{
     int v[4],a,r,p,h;
     for(int i=0;i<4;i++){
     cin>>v[i];
     }
     cin>>h;
     sort(v,v+4);
     if(v[1]+v[2]+v[3]>h)cout<<"WAW\n";
     else cout<<"AWW\n";
}
