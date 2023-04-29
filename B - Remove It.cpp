#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n,x,a[100000],b[100000],j=0,i;
cin>>n>>x;
for(i=0;i<n;i++){
     cin>>a[i];
     if(a[i]!=x){
         b[j]=a[i];
         j++;
     }
}
for(i=0;i<j;i++){
cout<<b[i]<<" ";
}
cout<<endl;
}
