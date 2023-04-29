#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b,sum=700,c=0;
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
          if(s[i]=='o')c++;
	}
	cout<<sum+c*100<<endl;
}

