#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a==0 && c==0 &&b==0){printf("Aoki");}
    if(a==0 && c==1 &&b==0 ){printf("Takahashi");}
    while (a != 0 && b != 0)
    {
        a--;
        b--;
        if(a==0 &&b!=0)printf("Aoki");
        else if(a!=0 &&b==0)printf("Takahashi");
        else if(a==0 && b==0)
        {
             if(c==0){printf("Aoki");}
             else{printf("Takahashi");}
        }

    }
    return 0;
}
