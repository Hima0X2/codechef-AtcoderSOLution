#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x,t;
	string s;
	cin>>s;
	if(s=="RRR")cout<<3<<endl;
	else if((s[0]=='R'&&s[1]=='R')||(s[2]=='R'&&s[1]=='R'))cout<<2<<endl;
	else if(s[0]=='R'||s[1]=='R'||s[2]=='R')cout<<1<<endl;
	else cout<<0<<endl;
}

