// Input: nums = [1,2,2,4]
// Output: [2,3]

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> nums = {1,2,3,3,5};
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if(nums[i] != i+1)
        {
            cout<<nums[i]<<" "<<i+1;
        }
    }
    
    return 0;
}