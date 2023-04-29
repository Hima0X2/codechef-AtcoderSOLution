#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> nums;
int a,n,mx,mn;
cin>>n;
for(int i=1;i<=n;i++){
cin>>a;
nums.push_back(a);
}
sort(nums.begin(),nums.end());
int i=0,j=nums.size()-1;
while(i<=j){
     if(nums[i]==nums[j]){
          return {i+1,j+1};
     }
     else if(nums[i]<nums[j]){
         j--;
     }
     else{
          i++;
     }
}
return int {};
}

