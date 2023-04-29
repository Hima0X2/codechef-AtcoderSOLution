#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b,sum,mul,sub;
	cin>>a>>b;
 sum=a+b;
 sub=a-b;
 mul=a*b;
 cout<<max(mul,max(sum,sub))<<endl;
}

