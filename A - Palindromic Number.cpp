#include<iostream>
using namespace std;
int main()
{
	long long int n,rev=0,rem,p;
	cin>>n;
	p=n;
	while(n!=0)
	{
		rem = n%10;
		rev =rev*10+rem;
		n=n/10;
	}
	//cout<<rev<<endl;
	if(rev==p){cout<<"Yes\n";}
	else{cout<<"No\n";}
}

