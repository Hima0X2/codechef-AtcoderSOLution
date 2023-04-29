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
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n;
     cin>>t;
     while(t--){
               long long int mn=INT_MAX,mx=INT_MIN,c=1;
cin>>n;
for(i=0;i<n;i++){
     cin>>a[i];
}
for(i=1;i<n;i++){
    if(abs(a[i]-a[i-1])<3){
c++;
    }
    else{
mn=min(c,mn);
mx=max(c,mx);
c=1;
    }
}
mn=min(c,mn);
mx=max(c,mx);
cout<<mn<<" "<<mx<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




