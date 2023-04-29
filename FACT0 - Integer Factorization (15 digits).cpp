/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const int mx = 1e6+123;
void prime(long long int n){
     long long int i,cnt=0;
     while(n%2==0){
cnt++;
n=n/2;
     }
     if(cnt){
     cout<<"2^"<<cnt<<" ";
     }
     for(i=3;i*i<=n;i=i+2){
                cnt=0;
          if(n%i==0){
               cnt++;
               n=n/i;
               while(n%i==0){
                    cnt++;
                    n=n/i;
               }
                cout<<i<<"^"<<cnt<<" ";
          }
     }
if(n>2){
     cout<<n<<"^"<<1;
}
cout<<endl;
}
int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,n;
    while(1)
    {
        cin>>t;
        if(t==0){
          break;
        }
       prime(t);
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




