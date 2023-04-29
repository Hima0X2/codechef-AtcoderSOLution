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
    long long int t,i,n,j,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        long long int k=1;
        for(i=0; i<3*n+1; i++)
        {
            for(j=0; j<3*m+1; j++)
            {
                 if(i==0||j==0||i==3*n||j==3*m){
                    cout<<'*';
                 }
               else if(i%3==0||j%3==0){
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
