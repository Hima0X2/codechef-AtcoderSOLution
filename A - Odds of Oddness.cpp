#include <bits/stdc++.h>
using namespace std;
int main()
{
  double a,b,c=0;
  cin>>a;
  for(int i=1;i<=a;i++){
     if(i%2==1){c++;}
  }
  // cout.precision(10);
  //cout<<(c/a)<<endl;
  printf("%0.10lf\n",c/a);
}

