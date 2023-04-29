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
     long long int t,i,a,c,d;
     cin>>t;
     while(t--){
               c=0,d=0;
          for(i=0;i<5;i++){
               cin>>a;
               if(a==1){
                    c++;
               }
               else if(a==2){
                    d++;
               }
          }
        if(c==d){
          cout<<"DRAW\n";
        }
        else if(c>d){
          cout<<"INDIA\n";
        }
        else{
          cout<<"ENGLAND\n";
        }
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




