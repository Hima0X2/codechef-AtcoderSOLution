/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123;
long long int a[mx];
long long int dec(long long int n,long long int k){
     long long int rev,dec=0,b=1;
    while (n> 0)
	{
	dec = dec +(n%10)* b;
	b =b*k;
	n=n/10;
	}
	return dec;
}
int main()
{
     optimize();

     long long int t,i,n,k,a,b;
     cin>>k;
     cin>>a>>b;
 cout<<dec(a,k)*dec(b,k)<<endl;

}
/// ALHAMDULILLAH



