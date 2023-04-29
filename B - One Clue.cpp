#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int k,x;
  cin>>k>>x;
  int p=(x-k)+1;
  int q=(x+k);
  for(long long int i=p;i<q;i++){
     cout<<i<<" ";
  }
  cout<<endl;
}
