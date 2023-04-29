#include<bits/stdc++.h>
using namespace std;
int main()
{
   double n,i,j,sum;
    cin>>n;
    for(int i = 1;i <= 38;i++)
  {
  	if(pow(3, i) > n)
  	{
  		break;
	}
  	for(int j = 1;j <=26;j++)
  	{
  		sum= double(pow(3, i) + pow(5, j));
  		if(sum == n)
  		{
  			cout<<i<<" "<<j<<endl;
  			return 0;
		}
		else if(sum > n)
		{
			break;
		}
	}
  }
  cout<<-1<<endl;
  return 0;
}
