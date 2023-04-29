#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
int t,d,c=1,i;
cin>>s;
d=s.length();
for(i=0;i<d;i=i+4){
     if(s[i]=='p'&&s[i+1]=='a'&&s[i+2]=='s'&&s[i+3]=='t'){
          c++;
     }
     else{
          cout<<c<<endl;
          return 0;
     }
}
cout<<"none\n";
}
