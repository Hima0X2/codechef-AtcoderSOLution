#include<bits/stdc++.h>
using namespace std;
string to_oct(int n){
  string s="";
  while(n){
    s = to_string(n%8) + s;
    n /= 8;
  }
  return s;
}
 int main()
{
     bool flag;
  long long int n,j,sum;
  cin>>n;
  sum=n;
  if(n==7){
          cout<<(n-1)<<endl;
  return 0;
  }
 cout<<to_oct(n)<<endl;
}

