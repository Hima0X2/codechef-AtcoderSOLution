#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int s[mx],t[mx],a[mx];

int main()
{
     optimize();
     long long int n,i,p;
     cin>>n;
     for(i=0;i<n;i++){
          cin>>s[i];
     }
      for(i=0;i<n;i++){
          cin>>t[i];
     }
     vector<long long int> a;
     a.push_back(t[0]);
     p=s[0]+t[0];
      for(i=0;i<n-1;i++){
        p= min(p,t[i+1]);
        a.push_back(p);
        p=p+a[i];
     }
     for(i=0;i<a.size();i++){
          cout<<a[i]<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}


