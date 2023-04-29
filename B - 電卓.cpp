#include<bits/stdc++.h>
using namespace std;
int main()
{
double x,y;
cin>>x>>y;
if(y==0){
     cout<<"ERROR\n";
}
else{
    std::cout << std::fixed << std::setprecision(2);
    cout <<floor(100*x/y)/100 << endl;
}
}
