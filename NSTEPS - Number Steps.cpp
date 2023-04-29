
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
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,x,y,n;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x==y)
        {
            if(x&1)
            {
                cout<<2*x-1<<endl;
            }
            else
            {
                cout<<2*x<<endl;
            }
        }
        else{
          if(x==y||x==y+2){
             if(x&1){
               cout<<x+y-1<<endl;
             }
             else{
               cout<<x+y<<endl;
             }
          }
          else{
               cout<<"No Number\n";
          }
        }
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH

