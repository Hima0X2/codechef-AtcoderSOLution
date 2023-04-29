/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e7+123;

int main()
{
     optimize();
     long long int t,i,n,j;
     cin>>t;
     while(t--){
cin>>n;
char a[n][n];
for(i=0;i<n;i++){
     for(j=0;j<n;j++){
if(i==j&&(i!=0&&i!=2)){
     a[i][j]='Q';
}
else{
     a[i][j]='.';
}
     }
}
for(i=0;i<n;i++){
     for(j=0;j<n;j++){
               cout<<a[i][j];
     }
     cout<<endl;
}
     }
}
/// ALHAMDULILLAH




