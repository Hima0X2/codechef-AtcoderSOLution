#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,j,i,a[100000],cnt=0;
  cin>>n;
  for(i=0;i<n;i++){
     cin>>a[i];
  }
  sort(a,a+n);
  for(i=1,j=0;i<n;i++){
          bak:
     if(a[i]%a[j]==0){
          cnt++;
     }
  }
  if(cnt!=0)cout<<a[0]<<endl;
  else{
     j++;
     goto bak;
  }
}

