#include<bits/stdc++.h>
using namespace std;
int main() {

  int t;
  cin >> t;
  while (t--) {

    int n, x, val;
    cin >> n >> x;

    if (n % 3 == 0) {
      cout << n / 3 * x * 2 << endl;
    }
    else if (n % 3 == 1) {
      cout << n / 3 * (x * 2) + 1 * x << endl;
    }
    else if (n % 3 == 2) {

      cout << n / 3 * x * 2 + 2 * x << endl;
    }
  }
  return 0;
}
