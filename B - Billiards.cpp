#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x1,x2,y1,y2,d;
     cin>>x1>>y1>>x2>>y2;
     d=(y1*x2+y2*x1);
     d=d/(y2+y1)*1.00;
     cout<<fixed<<setprecision(10);
     cout<<d<<endl;
}
