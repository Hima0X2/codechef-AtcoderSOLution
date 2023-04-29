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
    long long t,i,a,b,n;
    cin>>a>>b;
    while(a>0&&b>0)
    {
        if(((a%10)+(b%10))>=10)
        {
            cout << "Hard\n";
            return 0;
        }
        a=a/10;
        b=b/10;
    }
    cout<<"EASY\n";
}
/// ALHAMDULILLAH
