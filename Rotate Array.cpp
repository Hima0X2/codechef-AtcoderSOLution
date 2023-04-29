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
     optimize();
     int i,k,j;
     for(i=0;i<4;i++){
          cin>>a[i];
     }
     //cout<<a[0]<<endl;
     cin>>k;
     int p=4;
        for(i=p-k,j=1;j<=p;i++,j++){
               cout<<a[i]<<" ";
            if(i==(p-1)){
                i=-1;
            }
        }
        cout<<endl;
}
/// ALHAMDULILLAH



