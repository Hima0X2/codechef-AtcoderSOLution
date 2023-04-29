#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e8+123;
bitset<mx> a;

int main()
{
     optimize();
     long long int i,j;
     //memset(a,0,sizeof(a));
for(i=4;i<mx;i=i+2){
     a[i]=1;
}
for(i=3;i<sqrt(mx);i=i+2){
     if(a[i]==0){
          for(j=i*i;j<mx;j=j+(i+i)){
               a[j]=1;
          }
     }
}
a[0]=a[1]=1;
vector<long long int> v;
for(i=2;i<mx;i++){
     if(a[i]==0){
          v.push_back(i);
     }
}
//cout<<v.size()<<endl;
for(i=0;i<v.size();i=i+100){
     if(v[i]<1e8)cout<<v[i]<<endl;
}
}


