#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b;
	int k = 1;
	cin >> a >> b;
	for (int i = b; i < a; i++)k *= 32;
	cout << k << endl;
	return 0;
}
