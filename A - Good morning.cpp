#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a < c)cout << "Takahashi" << endl;
	else if (a > c)cout << "Aoki" << endl;
	else {
		if (b <= d)cout << "Takahashi" << endl;
		else cout << "Aoki" << endl;
	}
	return 0;
}
