#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
     int i,a[100000];
     for(i=0;i<n;i++){
          cin>>a[i];
     }
     sort(a,a+n);
     cout<<a[n-1]-a[0]<<endl;
}

