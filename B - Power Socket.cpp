#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    cin>>a>>b;
    int c=1;
    while(b>0){
     if((b-a)>0){
          c++;
     }
     b=b-a;
    }
    cout<<c<<endl;
}

