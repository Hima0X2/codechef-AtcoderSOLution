#include<bits/stdc++.h>
using namespace std;
int main()
{
     int p,q,r;
     cin>>p>>q>>r;
     cout<<min(abs(p+q),min(abs(q+r),abs(p+r)))<<endl;
}



