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
     optimize();
     long long int t,i,n;
     cin>>t;
     string s="";
     s=s+'A';
     t--;
     while(t!=0){
      if(t%2==1){
          t--;
          s=s+'A';
      }
      else{
          s=s+'B';
          t=t/2;
      }
     }
     reverse(s.begin(),s.end());
     cout<<s<<endl;
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH
