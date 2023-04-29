/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
bool is_palindrom(long long int n){
long long int rev,temp=n,sum=0;
while(temp!=0){
     sum=sum*10+temp%10;
     temp=temp/10;
}
if(sum==n){
     return 1;
}
else{
     return 0;
}
}
int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n++;
        while(is_palindrom(n)!=1){
          n++;
        }
     cout<<n<<endl;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




