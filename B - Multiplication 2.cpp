#include <bits/stdc++.h>
using namespace std;
#define ex 1000000000000000000
int main()
{
	long long int i, j, n, f = 1, d = 0;
	string s;
	cin >> n;
	long long int a[n];
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] == 0)
		{
			d = 1;
		}
	}
	if (d)
	{
		cout << 0 << endl;
		return 0;
	}
	for (i = 0; i < n; i++)
	{
		if ((ex / f) < a[i])
		{
			cout << -1 << endl;
			return 0;
		}
		f = f * a[i];

		if (f > ex)
		{
			cout << -1 << endl;
			return 0;
		}
	}
	cout << f << endl;
}
