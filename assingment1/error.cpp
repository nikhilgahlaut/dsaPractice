// Input: nums = [1,2,2,4]
// Output: [2,3]

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector <int> nums = {3,2,3,4,6,5};
    int n = nums.size();
    // sort(nums.begin(),nums.end());
    for (int i = 0; i < n; i++)
    {
        if(nums[i] != i+1)
        {
            cout<<nums[i]<<" "<<i+1;
            break;
        }
    }
    
    return 0;
}