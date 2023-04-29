#include<bits/stdc++.h>
using namespace std;
int main(){
    double v, t, s, d,se;
    cin >> v >> t >> s >> d;
     se = d / v;
    if (se < t || se > s) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}
