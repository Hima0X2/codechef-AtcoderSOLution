#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,k,c=0;
    cin>>n;
    long long int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    //sort(a,a+n);
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            for(k=j+1;k<n; k++)
            {
                 long long int mx=max(a[k],max(a[i],a[j]));
                 if(a[k]==mx){
                  if((a[i]+a[j]>a[k])&&(a[i]!=a[j])&&(a[j]!=a[k])&&(a[i]!=a[k])){
                    c++;
                  }
                 }
                 else if(a[i]==mx){
                      if((a[k]+a[j]>a[i])&&(a[i]!=a[j])&&(a[j]!=a[k])&&(a[i]!=a[k])){
                    c++;
                  }
                 }
                 else{
                   if((a[k]+a[i]>a[j])&&(a[i]!=a[j])&&(a[j]!=a[k])&&(a[i]!=a[k])){
                    c++;
                  }
                 }
            }
        }
    }
    cout<<c<<endl;
}

