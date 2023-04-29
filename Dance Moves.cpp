/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,x,y;
     cin>>t;
     while(t--){
cin>>x>>y;
long long int p=y-x;
if(y>=x){
if(p%2==0){
     cout<<p/2<<endl;
}
else{
     cout<<(p/2)+2<<endl;
}
     }
     else{
          cout<<abs(x-y)<<endl;
     }
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




