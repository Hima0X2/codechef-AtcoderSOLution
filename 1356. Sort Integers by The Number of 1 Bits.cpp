#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,i,j;
     cin>>n;
     long long int a[n];
     vector<long long int> v;
      vector<long long int> v1;
     for(i=0;i<n;i++){
          cin>>a[i];
          v.push_back(a[i]);
     }
     sort(v.begin(),v.end());
     for(i=0;i<n;i++){
               for(j=i+1;j<n;j++){
          bitset<1000> a;
           bitset<1000> b;
       a=v[i];
       b=v[j];
       if(b.count()<a.count()){

       }
       else{
          v1.push_back(v[i]);
       }
     }
     }
        for(i=0;i<n;i++){
             cout<<v[i]<<" ";
        }
}
