#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int a,b,c,d,f;
     cin>>a>>b>>c>>d;
     f=max(max(a*c,a*d),max(b*c,b*d));
     cout<<f<<endl;
}
