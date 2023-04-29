#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long n,k,m=-1,n1,n2;
  cin >> n >> k;
  while(k--)
  {
    string s= to_string(n);
    sort(s.begin(), s.end());
    n1 = stoi(s);
    reverse(s.begin(),s.end());
    n2 = stoi(s);
    n = n2 - n1;
    if(n == 0)break;
  }
  cout << n << endl;
}
