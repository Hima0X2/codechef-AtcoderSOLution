/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
   long long int n,i, m, b;
	cin >> n >> m;
	for (i = 0; i < n; i++){
		cin >> b;
		a[b]++;
	}
	for (i = 0; i < m; i++){
		cin >> b;
		a[b]++;
	}
	for (i = 0; i < 1e3 + 5; i++){
		if (a[i] == 1){
			cout << i << " ";
		}
	}
	cout<<endl;
}
/// ALHAMDULILLAH



