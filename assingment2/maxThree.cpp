#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int maximumProduct(vector<int>& nums){
    sort(nums.begin(),nums.end());
    int len = nums.size();
    int prod1 = nums[len - 1] * nums[len - 2] * nums[len -3];
    int prod2 = nums[0] * nums[1] * nums[2];
    return max(prod1,prod2);
    
}

int main()
{
    vector <int> nums = {3,4,-100,-99};//{1,3,5,6,8}
    cout<<maximumProduct(nums);
    return 0;
}