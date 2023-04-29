#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
long long int n,k,i;
cin>>n>>k;
for(i=0;i<n;i++){
     cin>>a[i];
}
sort(a,a+n);
vector<long long int> v;
v.push_back(a[0]);
for(i=1;i<n;i++){
     if(a[i]!=a[i-1]){
          v.push_back(a[i]);
     }
}
long long int p=v.size();
cout<<min(k,p)<<endl;

}


