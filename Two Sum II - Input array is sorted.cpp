class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> v;
        int i=0;
        int j=numbers.size()-1;
while(i<=j){
    if(numbers[i]+numbers[j]==target){
    v.push_back(i);
    v.push_back(j);
    return {i+1,j+1};
    //cout<<i<<" "<<j<<endl;
    //return 0;
    }
    else if(numbers[i]+numbers[j]>target){
         j--;
    }
    else{
     i++;
    }
}
    return {};

    }
};
