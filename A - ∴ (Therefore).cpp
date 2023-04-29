#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    int t=n.length();
    //cout<<n[0]<<endl;
        if(n[t-1]=='2'||n[t-1]=='4'||n[t-1]=='5'||n[t-1]=='7'||n[t-1]=='9'){
          cout<<"hon\n";
        }
        else if(n[t-1]=='0'||n[t-1]=='1'||n[t-1]=='6'||n[t-1]=='8'){
          cout<<"pon\n";
        }
        else{
          cout<<"bon\n";
        }
}



