#include <bits/stdc++.h>

using namespace std;

int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int, int> > V(n);
    for (int i = 0; i < n; i++)cin >> V[i].first >> V[i].second;
    int ans = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < i; j++)
            ans = max(ans, (V[i].first - V[j].first) * (V[i].first - V[j].first) +
                           (V[i].second - V[j].second) * (V[i].second - V[j].second));
    printf("%.10lf", sqrt(ans));
    return 0;
}
