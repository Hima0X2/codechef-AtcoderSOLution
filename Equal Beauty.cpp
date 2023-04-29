/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n;
     cin>>t;
     while(t--){
               long long int sum1=0,sum2=0,m,p,q;
cin>>n;
for(i=0;i<n;i++){
     cin>>a[i];
}
sort(a,a+n);
if(n==2){
     cout<<0<<endl;
     continue;
}
else if(n==3){
     cout<<min(a[1]-a[0],a[2]-a[1])<<endl;
     continue;
}
long long int l=1,r=n-2;
for(i=0;i<n-1;i++){
     sum1=sum1+abs(a[i]-a[(n-1)/2]);
}
for(i=1;i<n;i++){
     sum2=sum2+abs(a[i]-a[1+(n-1)/2]);
}
m=min(sum1,sum2);
while(l<r){
     q=a[n-1]-a[l];
     p=a[r]-a[0];
     m=min(m,abs(p-q));
     if(q>p){
       l++;
     }
     else{
          r--;
     }
}
cout<<m<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




