#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n=2,num,i,d1,d2,d3;
	long long int a[n];
	cin>>num;
	for(i=n;i>=0;i--)
	{
		a[i]=num%10;
		num/=10;
	}
	d1=a[0]*100+a[1]*10+a[2]*1;
	d2=a[1]*100+a[2]*10+a[0]*1;
	d3=a[2]*100+a[0]*10+a[1]*1;
	cout<<d1+d2+d3<<endl;
}
