#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
     long long int a,b;
     cin>>a>>b;
     if(b==0){
          cout<<"Gold\n";
     }
     else if(a==0){
          cout<<"Silver\n";
     }
     else{
          cout<<"Alloy\n";
     }
//std::cout << std::fixed << std::setprecision(2);
}


