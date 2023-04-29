#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
double p,a,b,c=10;
cin>>a>>b;
p=((a-b)/3)+b;
if((int)(p*c)%10==0){
     cout<<p<<endl;
}
else{
std::cout << std::fixed << std::setprecision(7);
  cout<<p<<endl;
}
}


