#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
     long long int i,j;
     string s[4];
     cin>>s[0]>>s[1]>>s[2]>>s[3];
  for(i=0;i<4;i++){
     for(j=0;j<4;j++){
          if(i!=j&&s[i]==s[j]){
               cout<<"No\n";
               return 0;
          }
     }
  }
cout<<"Yes\n";
     //H, 2B, 3B, HR.
//std::cout << std::fixed << std::setprecision(2);
}


