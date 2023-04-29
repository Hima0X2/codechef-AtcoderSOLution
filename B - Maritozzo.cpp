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
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    string t;
    cin>>t;
    int i;
    string u="";
    for(i=0;i<t.size();i++){
     if(t[i]=='1'){
          u=u+s1;
     }
     else if(t[i]=='2'){
          u=u+s2;
     }
     else{
          u=u+s3;
     }
    }
    cout<<u<<endl;
}
/// ALHAMDULILLAH




