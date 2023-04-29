/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int i,j,k;
   string s,t,u;
   cin>>s;
    i = 0;
    j = s.size()-1;
    k = 0;
    while (j >= 0 && s[j] == 'a') {
        j--;
        k++;
    }

    while (k-- && i < s.size() && s[i] == 'a'){
        i++;
    }
    while (i < j && s[i] == s[j]) {
        i++;
        j--;
    }
cout<<((i >= j) ? "Yes" : "No")<<endl;
}
/// ALHAMDULILLAH
