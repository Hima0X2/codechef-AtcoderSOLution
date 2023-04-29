#include <bits/stdc++.h>
using namespace std;
int main(){
  long long int mx,c,a,b;
  cin>>a>>b>>c;
  mx=max(a,max(b,c));
  cout << 3*mx-a-b-c<<endl;
}

