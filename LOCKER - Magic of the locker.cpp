/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e9+7;
long long int pw(long long int b,long long int p){
     if(p==0) return 1;
     if(p%2) return ((b*pw(b,p-1)))%mx;
     else{
          long long int k=pw(b,p/2)%mx;
          return ((k*k))%mx;
     }
}
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n;
     cin>>t;
     while(t--){
               long long int sum=1;
cin>>n;
while(1){
     if(n==0||n%3==0){
          n=n/3;
          break;
     }
     sum=sum*2;
     n=n-2;
}
if(n>0){
sum=(sum*pw(3,n))%mx;
}
cout<<sum<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH

 Function to calculate x raised to the power y in
int power(int x, unsigned int y)
{
	int temp;
	if( y == 0)
		return 1;
	temp = power(x, y/2);
	if (y%2 == 0)
		return temp*temp;
	else
		return x*temp*temp;
}


