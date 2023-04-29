#include<bits/stdc++.h>
using namespace std;
int a[100000][101];
int main()
{
  int i,j,n,m,min=1000,sum=0;
  cin >> n >> m;
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      cin >> a[i][j];
      if(min>a[i][j])
         min=a[i][j];
    }
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
       sum+=a[i][j]-min;
  }
  cout << sum << endl;
}
