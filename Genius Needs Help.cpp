/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,n,d=0;
    cin>>t;
    string a,b;
    while(t--)
    {
         cout<<"Case #"<<++d<<": ";
        cin>>a>>b;
        int carry=0,sum=0;
        string v="";
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        for(i=0; i<min(a.size(),b.size()); i++)
        {
            sum=(a[i]-'0')+(b[i]-'0')+carry;
            v.push_back(sum%10+'0');
            carry=sum/10;
        }
        while(i<a.size())
        {
            sum=(a[i]-'0')+carry;
             v.push_back(sum%10+'0');
            carry=sum/10;
            i++;
        }
        while(i<b.size())
        {
            sum=(b[i]-'0')+carry;
             v.push_back(sum%10+'0');
            carry=sum/10;
            i++;
        }
        if(carry){
          v.push_back(carry+'0');
        }
        reverse(v.begin(),v.end());
       cout<<v<<endl;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




