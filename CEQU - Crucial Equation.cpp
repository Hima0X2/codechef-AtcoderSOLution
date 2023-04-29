/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
     optimize();
     long long int t,i,n,a,b,c,g,d=0;
     cin>>t;
     while(t--){
cin>>a>>b>>c;
g=__gcd(a,b);
if(c%g==0){
    cout<<"Case "<<++d<<": Yes"<<endl;
}
else{
     cout<<"Case "<<++d<<": No"<<endl;
}
}
}
/// ALHAMDULILLAH




