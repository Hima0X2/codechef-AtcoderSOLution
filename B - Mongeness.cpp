/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int a[100][100];

int main()
{
     optimize();
     long long int t,i1,i2,n,h,w,j1,j2;
     cin>>h>>w;
     for(i1=0;i1<h;i1++){
          for(j1=0;j1<w;j1++){
               cin>>a[i1][j1];
          }
     }
      for(i1=0;i1<h;i1++){
                for(i2=i1+1;i2<h;i2++){
          for(j1=0;j1<w;j1++){
              for(j2=j1+1;j2<w;j2++){
                   if(a[i1][j1]+a[i2][j2]>a[i2][j1]+a[i1][j2]){
                    cout<<"No\n";
                    return 0;
                   }
              }
          }
                }
     }
     cout<<"Yes\n";
}
/// ALHAMDULILLAH




