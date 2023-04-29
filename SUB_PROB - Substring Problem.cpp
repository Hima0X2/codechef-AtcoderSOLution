#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
long long int t,n;
string s,p;
cin>>p;
cin>>t;
while(t--){
     cin>>s;
     if (p.find(s) != std::string::npos) {
      cout<<"Y\n";
     }
     else{
       cout<<"N\n";
     }
}
}


