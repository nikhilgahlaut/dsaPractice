// Given an integer array nums of length n and an integer target, find three integers
// in nums such that the sum is closest to the target.
// Return the sum of the three integers.

// You may assume that each input would have exactly one solution.

// Example 1:
// Input: nums = [-1,2,1,-4], target = 1
// Output: 2

// Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int threeClosestSum(vector<int> nums, int target){
    int n = nums.size();
    int closestSum = INT16_MAX;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n-2; i++)
    {
        int left = i+1;
        int right = n-1;

        while (left < right)
        {
            int sum = nums[i] + nums[left] + nums[right];

            if(sum == target) return sum;
            else if( sum < target){
                left++;
            }
            else right--;
        
            if(abs(sum-target ) < abs(closestSum - target))
                closestSum = sum;
        }
        
    }
    return closestSum;
    
}

int main()
{
    vector <int> nums = {2,3,8,9,10};
    int target = 16;
    int result = threeClosestSum(nums,target);
    cout<<result;

    return 0;
}

