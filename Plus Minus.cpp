/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 10000;
double a[mx];

int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    double t,n,pos=0,neg=0,zero=0;
    std::cout << std::fixed << std::setprecision(6);
    long long int i;
     cin>>n;
     for(i=0;i<n;i++){
          cin>>a[i];
          if(a[i]>0){
              pos++;
          }
          else if(a[i]<0){
              neg++;
          }
          else{
               zero++;
          }
     }
     cout<<pos/n<<endl;
     cout<<neg/n<<endl;
     cout<<zero/n<<endl;
}
/// ALHAMDULILLAH




