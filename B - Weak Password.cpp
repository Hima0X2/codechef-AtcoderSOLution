#include <bits/stdc++.h>
using namespace std;
int main(void) {
	char a[5];
	for (int i = 0; i < 5; i++)a[i] = 0;
	cin >> a;
	bool same = true;
	bool step = true;
	for (int i = 0; i < 3; i++) {
		if (a[i] != a[i + 1])same = false;
		if (((a[i] + 1) % 10) != (a[i + 1] % 10))step = false;
	}
	if (same || step)cout << "Weak" << endl;
	else cout << "Strong" << endl;
	return 0;
}
