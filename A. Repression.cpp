#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int a,b,c;
cin>>a>>b>>c;
cout<<max(a+b,max(a+c,b+c))<<endl;
}
