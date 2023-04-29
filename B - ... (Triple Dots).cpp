#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int k,i;
     string s;
     cin>>k;
     cin>>s;
    long long int x=s.length();
     int d=min(k,x);
     for(i=0;i<d;i++){
          cout<<s[i];
     }
     if(s.length()>k){
          cout<<"...\n";
     }
}

