#include<bits/stdc++.h>
using namespace std;
int ceil(int a,int b){return (a+b-1)/b;}
int main(){
  int x,y;
  cin >> x >> y;
  if(x>=y){cout << "0\n";return 0;}
  cout << ceil(y-x,10) << '\n';
  return 0;
}
