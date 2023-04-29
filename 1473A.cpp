#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,i,n,d,a[100000],p;
     p=0;
     cin>>t;
     wa:
     while(t--){
          cin>>n>>d;
          for(i=0;i<n;i++){
               cin>>a[i];
              if(a[i]>d)p=1;
          }
          if(p==0)  cout<<"YES"<<endl;
          else{
                    p=1;
          for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]+a[j]<=d){
					p=0;
				}
			}
		}
		if(p==0)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
     }
     p=0;
}
}
