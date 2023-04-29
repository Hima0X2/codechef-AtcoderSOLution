#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,l,k;
    string s;
    cin >> s;
    bool a = false;
    for(i = 0; i < s.size(); ++i)
    {
        if(a == false && s[i] == 'A')
        {
            k = i;
            a = true;
        }
        if(a == true && s[i] == 'Z')
            l = i;
    }
    cout << l-k+1;
}
