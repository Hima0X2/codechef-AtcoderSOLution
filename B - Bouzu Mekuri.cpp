#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
long long int n,i;
string s;
cin>>n;
cin>>s;
for(i=0;i<s.size();i++){
     if(s[i]=='1'){
          break;
     }
}
//cout<<i<<endl;
if((i+1)%2){
     cout<<"Takahashi\n";
}
else{
     cout<<"Aoki\n";
}
}


