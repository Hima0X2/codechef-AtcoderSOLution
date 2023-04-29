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
    long long int t,i,n,r,c,j;
    cin>>t;
    while(t--)
    {
        cin>>r>>c;
     for(i=0;i<r;i++){
          for(j=0;j<c;j++){
               if(i==0||j==0||i==r-1||j==c-1){
                    cout<<'*';
               }
               else{
                    cout<<'.';
               }
          }
          cout<<endl;
     }
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




