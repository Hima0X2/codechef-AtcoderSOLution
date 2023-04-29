/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
string decimalToBinary(int n)
{
    string ans = "";
    while (n > 0)
    {
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
    long long int t,i,n,c=0,d=0;
    cin>>n;
    string s=decimalToBinary(n);
    t=s.size();
    for(i=0; i<t; i++)
    {
        if(s[i]=='1')
        {
          c++;
        }
        else{
          d++;
        }
    }
    if(c>d||d>c){
     cout<<"Yes\n";
    }
    else{
     cout<<"No\n";
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




