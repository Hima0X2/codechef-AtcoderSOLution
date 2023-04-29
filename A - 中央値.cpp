#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c;
cin>>a>>b>>c;
if((a>c&&a<b)||(a<c&&a>b)){
     cout<<"A"<<endl;
}
else if((b>c&&b<a)||(b<c&&a<b)){
     cout<<"B"<<endl;
}
else{
     cout<<"C"<<endl;
}
}

