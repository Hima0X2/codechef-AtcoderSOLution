/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n;
     cin>>t;
     if(t>=42){
          t++;
     }
     if(t<10){
          cout<<"AGC00";
     }
     else if(t<100){
      cout<<"AGC0";
     }
     else{
          cout<<"AGC";
     }
    cout<<t<<endl;
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




