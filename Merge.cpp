/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mod 1000000007
string decimalToBinary(long long int n)
{
    string ans = "";
    while (n > 0) {
        if(n%2==0)
        ans = '0' + ans;
        else
        ans = '1' + ans;
        n = n / 2;
    }
    return ans;
}
int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,n,a,b,sum=1;
    cin>>a>>b;
    a=a%mod;
    b=b%mod;
    string s;
    long long int ans=0;
    s=decimalToBinary(a)+decimalToBinary(b);
    n=s.size();
    for(i=0; i<n; i++)
    {
        if(s[i]=='1')
        {
            ans=ans+pow(2,n-1-i);
        }
    }
    cout<<ans%mod<<endl;
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




