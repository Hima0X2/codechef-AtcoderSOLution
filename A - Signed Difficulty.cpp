/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
     int x,y;
     char z;
     cin>>x>>z>>y;
     if(y>=0&&y<=2){
          cout<<x<<'-'<<endl;
     }
     else if(y>=3&&y<=6){
          cout<<x<<endl;
     }
     else if(y>=7&&y<=9){
          cout<<x<<'+'<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH



