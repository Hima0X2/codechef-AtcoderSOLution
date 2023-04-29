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

int main()
{
     bool ok=true;
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,sum=0;
     string s;
     cin>>s;
     for(i=1;i<s.size()-1;i++){
     if((s[i]>='A'&&s[i]<='Z')){
               ok=false;
                    break;
                 }
          sum=sum*10+(s[i]-'0');
     }
     if((s[0]>='A'&&s[0]<='Z')&&(sum>=100000&&sum<=999999)&&(s[s.size()-1]>='A'&&s[s.size()-1]<='Z')&&ok==true){
          cout<<"Yes\n";
     }
     else{
          cout<<"No\n";
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




