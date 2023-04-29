/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,k,a;
     vector<long long int> v;
     cin>>t;
     while(t--){
               long long int c=0;
cin>>n>>k;
for(i=0;i<n;i++){
     cin>>a;
     v.push_back(a);
}
sort(v.begin(),v.end(),greater<>());
//reverse(v.begin(),v.end());
long long int x=v[k-1];
for(i=0;i<n;i++){
     if(v[i]>=x){
          c++;
     }
     else{
          break;
     }
}
cout<<c<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




