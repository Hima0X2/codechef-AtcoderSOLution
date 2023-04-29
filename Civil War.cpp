/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
     long long int t,i,n,j;
     cin>>n;
     bool flag=true;
     for(i=0;i<n;i++){
          cin>>a[i];
     }
     set<long long int> s;
     for(i=0;i<n;i++){
          for(j=i+1;j<n;j++){
                    if(j!=i){
          if((a[i]|a[j])==(a[i]+a[j])){
                    flag=false;
               s.insert(i);
               s.insert(j);
          }
                    }
          }
     }
     if(flag){
          cout<<-1<<endl;
     }
     else{
for (auto it = s.begin(); it !=s.end(); ++it)
        cout<< *it<<" ";
     }
     cout<<endl;
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH



