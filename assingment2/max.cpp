#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int maxPairSum(vector <int> &nums){
    int n = nums.size();
    int sum = 0;
    sort(nums.begin(),nums.end());
    for (int i = 0; i < n; i+=2)
    {
        sum = sum + nums[i];
    }
    return sum;
    
}

int main(){
    vector <int> nums = {1,2,2,5,6,6}; //1,2,2,5,6,6
    int result = maxPairSum(nums);
    cout<<result;
    return 0;
}