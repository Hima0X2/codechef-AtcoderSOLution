#include<bits/stdc++.h>
using namespace std;

int main() {
  string n;
  cin >> n;
  long long s = 0;
  for (int i = 0; i < n.size(); i++) s += n[i] - '0';

  if (s % 9 == 0) cout << "Yes" << endl;
  else cout << "No" << endl;
}
