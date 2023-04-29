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
    string s, t;
  cin >> s >> t;

  for(int k = 0; k <= 25; k++){
    string s2 = s;
    for(int i = 0; i < (int)s.size(); i++){
      s2[i] = ((s2[i]-'a')+k)%26 + 'a';
    }
    if(s2 == t){
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
/// ALHAMDULILLAH




