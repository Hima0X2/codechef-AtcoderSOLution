#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,a,b;

    cin >> x >> a >> b;
    if(a>=b){
        cout << "delicious"<<endl;
    }else if(b-a>x){
        cout << "dangerous"<<endl;
    }else{
        cout << "safe"<<endl;
    }
    return 0;
}
