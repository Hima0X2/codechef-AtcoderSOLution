#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,c;
  cin>>a>>b;
  if(a>b)
    c=a;
  else
    c=b;
  if(abs(a-b)>=2)
    cout<<2*c-1;
  else
    cout<<a+b;
  return 0;
}


