/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
void hanoi(int n,int a,int b,int c){
     if(n==0){
          return;
     }
     hanoi(n-1,a,c,b);
     cout<<a<<" "<<c<<endl;
     hanoi(n-1,b,a,c);
}
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n;
     cin>>n;
     cout<<pow(2,n)-1<<endl;
    hanoi(n,1,2,3);
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




