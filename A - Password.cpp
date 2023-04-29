#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long int i,j,count1=0,count2=0,count3=0;
    cin>>s;
    sort(s.begin(),s.end());
    if(s.at(0)==s.at(1))count1++;
     if(s.at(2)==s.at(1))count2++;
      if(s.at(2)==s.at(3))count3++;
     // cout<<count1<<" "<<count2<<" "<<count3;
      if(count1+count2+count3==2){cout<<"Yes\n";}
      else{cout<<"No\n";}
}

