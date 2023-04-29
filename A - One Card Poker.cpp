#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int a,b,i;
     cin>>a>>b;
     if(a==1&&b!=1)cout<<"Alice\n";
     else if(b==1&&a!=1)cout<<"Bob\n";
     else if(a==b)cout<<"Draw\n";
     else if(a>b){cout<<"Alice\n";}
     else cout<<"Bob\n";
}

