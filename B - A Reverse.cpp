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
    long long int l,r,t,i,n;
    cin>>l>>r;
    string s;
    cin>>s;
    l--,r--;
    while(l<r){
     swap(s[l],s[r]);
    l++;r--;
    }
    cout<<s<<endl;
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




