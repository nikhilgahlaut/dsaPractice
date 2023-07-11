#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector <int> ans;
        for(int i = 0; i<n; i++)
        {
            int ele = nums[i]*nums[i];
            nums[i] = ele;
        
        }
        sort(nums.begin(),nums.end());
        return nums;
    }

int main(){
    vector<int> nums = {-4,-1,0,3,10};
    vector<int> result = sortedSquares(nums);
    for(int i = 0 ; i< result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}