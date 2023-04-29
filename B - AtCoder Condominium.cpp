#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y,i,j,n,c=0;
       cin >> x >> y;
       for(i=1;i<=x;i++)
       {
           n=i*100;
           for(j=1;j<=y;j++)
           {
               c=c+n+j;
           }
       }
       cout << c << endl;
    return 0;
}
