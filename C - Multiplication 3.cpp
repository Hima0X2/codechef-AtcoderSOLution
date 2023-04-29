#include<bits/stdc++.h>
using namespace std;
int main()
{
     string a,b;
     cin>>a>>b;
    b.erase(std::remove(b.begin(), b.end(), '.'), b.end());
    cout << (stoll(a) * stoll(b)) / 100 << endl;
}
