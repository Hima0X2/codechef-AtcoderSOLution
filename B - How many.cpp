#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
     long long int z,s,t,i=0,j=0,k=0,m=0;
     cin>>s>>z;
     for(i=0;i<=100;i++){
          for(j=0;j<=100;j++){
               for(k=0;k<=100;k++){
                         if(i*j*k<=z&&i+j+k<=s){
                             m++;
                         }
               }
          }
     }
     cout<<m<<endl;
      return 0;
//std::cout << std::fixed << std::setprecision(2);
}


