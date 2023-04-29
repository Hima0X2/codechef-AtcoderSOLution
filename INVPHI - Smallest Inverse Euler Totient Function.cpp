/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define mn 100000000
#define mx 202918035
int phi[mx+1], b[mn+1];
void Phi(void)
{
  int i, j;
  for( i = 1; i <= mx; ++i) phi[i] = i;
  for( i = 2; i <= mx; ++i)
    if( phi[i] == i )
      for( j = i; j <= mx; j += i)
        phi[j] = (phi[j] / i) * (i - 1);
  for( i = 1; i <= mx; ++i)
    if( phi[i] <= mn && b[phi[i]] == 0 )
      b[phi[i]] = i;
}

int main( void )
{
  int t;
  Phi();
 cin>>t;
  while( t--)
  {
    int n;
   cin>>n;
   if(b[n]==0){
     cout<<-1<<endl;
     continue;
   }
   cout<<b[n]<<endl;
    //printf( "%d\n", b[n] ? b[n] : -1);
  }
  return 0;
}
/// ALHAMDULILLAH




