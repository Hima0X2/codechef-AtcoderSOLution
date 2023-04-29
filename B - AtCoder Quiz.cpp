#include<bits/stdc++.h>
using namespace std;
int main()
{
  set<string> ans = {"ABC", "ARC", "AGC", "AHC"};
  string s;
	for(int i=0;i<3;i++)
	{
        cin>>s;
        ans.erase(s);
	}
    cout<<*ans.begin()<<endl;
}
