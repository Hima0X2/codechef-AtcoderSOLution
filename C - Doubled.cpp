#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i;
    cin>>n;
    for(i=1;;i++){
         long long int s=stoll(to_string(i) + to_string(i));
         //cout<<s<<endl;
     if(s>n){
          cout<<i-1<<endl;
          return 0;
     }
    }
}

