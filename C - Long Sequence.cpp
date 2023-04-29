/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e7+123;
long long int a[mx];
int main()
{
     optimize();
    long long int t,i,n,sum=0,x;
    long long int c=0;
     cin>>n;
     for(i=0;i<n;i++){
          cin>>a[i];
     }
     cin>>x;
     for(i=0;i<n;i++){
          sum=sum+a[i];
     }
     long long int p=x/sum;
     sum=x-(p*sum);
     c=p*n;
     for(i=0;i<n;i++){
          sum=sum-a[i];
          c++;
     if(sum<0){
          break;
     }
     }
     cout<<c<<endl;
}
/// ALHAMDULILLAH




