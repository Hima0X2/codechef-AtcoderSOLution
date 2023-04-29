#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x,t;
	cin >> n >> x>>t;
	int tm = (n + x - 1) / x;
	int ans = tm * t;
	cout << ans << endl;
}
