#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n;
  cin>>n;
 long long int sum=(n/500)*1000;
 //cout<<sum<<endl;
 n=n-(n/500)*500;
 sum=sum+(n/5)*5;
 cout<<sum<<endl;
}

