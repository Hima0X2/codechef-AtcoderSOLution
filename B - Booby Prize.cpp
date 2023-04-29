#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx],b[mx];

int main()
{
     optimize();
     long long int n,i;
     cin>>n;
     for(i=0;i<n;i++){
          cin>>a[i];
          b[i]=a[i];
     }
     sort(a,a+n);
      for(i=0;i<n;i++){
          if(b[i]==a[n-2]){
               cout<<i+1<<endl;
               return 0;
          }
     }
//std::cout << std::fixed << std::setprecision(2);
}


