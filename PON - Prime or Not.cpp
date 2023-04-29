#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,i,a,r,j;
    cin>>t;
    while(t--)
    {
         bool ok=false;
         cin>>n;
      r=sqrt(n);
       for(j=2;j<=r;j++)
       {
           if(n%j==0)
           {
            ok=true;
               break;
           }
       }
       if(ok)
        printf("NO\n");
       else
       printf("YES\n");
    }
    return 0;
}
