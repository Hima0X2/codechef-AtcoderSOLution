#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<string> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int ma = 0;
    string res;
    for(int i = 0; i < n; i++){
        string kouho = v[i];
        int cnt = 0;
        for(int j = 0; j < n; j++) if(v[j] == kouho) cnt++;
        if(cnt > ma){
            ma = cnt;
            res = kouho;
        }
    }
    cout << res << endl;
}
