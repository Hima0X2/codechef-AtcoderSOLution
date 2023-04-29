/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e7+123;
long long int a,b[mx];
bool compare(pair<long long int,long long int>&a,pair<long long int,long long int>&b){
     return a.second<b.second;
}
int main()
{
     optimize();
     long long int t,i,n,p;
     cin>>t;
     while(t--){
               vector<pair<long long int,long long int> > v;
               //long long int mp
cin>>n;
for(i=0;i<n;i++){
     cin>>a;
     v.push_back(make_pair(a,i));
}
sort(v.begin(),v.end());
p=0;
for(i=0;i<n;i++){
     if(v[i].first==p){
        v[i].first=p;
     }
    else if(v[i].first>p){
          v[i].first=p;
          p++;
     }
}
sort(v.begin(),v.end(),compare);
for(i=0;i<n;i++){
     cout<<v[i].first<<" ";
}
cout<<endl;
     }
}
/// ALHAMDULILLAH




