#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,c = 0, d = 0;
  cin >> n;
   map<int, int> a;
  for(int i = 1; i<= n; i++){
          a[i] = 0;
  }
  for(int i = 0; i < n; i++) {
    int b; cin >> b;
    a[b]++;
  }
  for(int i = 1; i <= n; i++) {
    if (a[i] == 0) c = i;
    if (a[i] == 2) d = i;
  }
  if (c == 0) cout << "Correct\n";
  else cout << d << " " << c << endl;
}
