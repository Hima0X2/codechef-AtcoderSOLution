#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,sum=0;
    cin>>a;
    b=a;
    while(a)
    {
        sum=sum+a%10;
        a=a/10;
    }
//cout<<sum<<endl;
    if(b%sum==0)
    {

        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }
}

