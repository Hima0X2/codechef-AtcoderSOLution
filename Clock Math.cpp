/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     int h,m;
	cin >> h >> m;
	int hr_g = (h*5)- m;
	double add_g = ((1/12.0)*(double)m);
	double finl = ((double)hr_g + add_g)*6.0;
	double res = min(360.0-finl,finl);
	std::cout << std::fixed << std::setprecision(7);
	cout << res<<endl;
   // cout<<(double)(360 - ((30 * h) - (5.5 * m)))<<endl;

}
/// ALHAMDULILLAH
