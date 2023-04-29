#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,a,b;
     cin>>n;
     a=n/100;
     if(abs(a*100-n)==0){
          cout<<a<<endl;
     }
     else{
          cout<<a+1<<endl;
     }
}
