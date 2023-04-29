#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    while(1){
        c-=b;
        if(c<=0) break;
        a-=d;
        if(a<=0) break;
    }
    if(a>c) cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
