/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e5+123;
long long int f[mx];
long long int mod =1000000007;
long long int feb(long long int n)
{
     long long int k;
     if(n&1){
        k=(n+1)/2;
     }
     else{
      k=n/2;
     }
     if(n==0){
          return f[n]=0;
     }
     if (n == 1 || n == 2){
        return (f[n] = 1);
    }
   if(f[n]){
     return f[n]%mod;
    }
    if(n&1){
         f[n]=(feb(k-1)%mod*feb(k-1)%mod+feb(k)%mod*feb(k)%mod)%mod;
    }
    else{
      f[n]=((2*feb(k-1)%mod+feb(k)%mod)*feb(k)%mod)%mod;
    }
    return f[n];
}
long long int sum(long long int n){
//     for(int i=0;i<=10;i++){
//        cout<<feb(i)<<endl;
//        }
     return feb(n+2)-1;
}
int main()
{
    optimize();
    long long int t,i,n,a,b,x;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        a=a%mod;
        b=b%mod;
//        for(i=0;i<=10;i++){
//          cout<<feb(i)<<endl;
//        }
        if(a!=0)
        {
            x=a-1;
        }
        else
        {
            x=a;
        }
        //cout<<sum(b)<<" "<<sum(a)<<endl;
        cout<<(sum(b)%mod-sum(x)%mod)%mod<<endl;
    }
}
/// ALHAMDULILLAH
