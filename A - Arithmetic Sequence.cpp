#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
long long int a1,a2,a3;
cin>>a1>>a2>>a3;
long long int x=2*a2-a3-a1;
if(x<0){
cout<<x+3*((1-x)/2)<<endl;
//cout<<(1-x)/2;
}
else{
     cout<<x<<endl;
}
}


