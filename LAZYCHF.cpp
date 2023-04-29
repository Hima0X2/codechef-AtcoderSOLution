#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,x,m,d;
     cin>>t;
     while(t--){
          cin>>x>>m>>d;
          cout<<min(x*m,d+1)<<endl;
     }
}

