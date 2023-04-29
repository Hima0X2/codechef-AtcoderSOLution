/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, x, c = 0;
	cin >> n;
	string s;
	cin >> s;
	x = n / 2;
	if (n == 1)
	{
		cout << "NO\n";
		return 0;
	}
	for (i = 0; i < n; i++)
	{
		if (i == x){
			continue;
		}
		if (s[i] == s[0])
		{
			c++;
		}
	}
	if (n % 2)

	{
		if (c == n - 1 && s[x] == '0')
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	else
	{
		cout << "NO\n";
	}
}
/// ALHAMDULILLAH



