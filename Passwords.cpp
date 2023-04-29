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
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n;
     string s;
     while(cin>>s){
               long long int num=0,dig=0,lo=0,c=0;
          for(i=0;i<s.size();i++){
               if(s[i]>='0'&&s[i]<='9'){
                    num=1;
               }
               else if(s[i]>='A'&&s[i]<='Z'){
                    dig=1;
               }
               else if(s[i]>='a'&&s[i]<='z'){
                    lo=1;
               }
               if(num==1&&dig==1&&lo==1){
                    c++;
                    num=0;
                    dig=0;
                    lo=0;
               }
          }
          cout<<c<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




