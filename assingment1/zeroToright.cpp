// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> nums ={0,1,0,3,12};
    int len = nums.size();
    int temp;
    for (int j = 0; j < len; j++)
    {
        for (int i = 0; i < len; i++)
    {
        if(nums[i] == 0 && nums[i+1] > nums[i])
        {
            nums[i] = temp;
            nums[i] = nums[i+1];
            nums[i+1] = temp;
        }
    }
    }
    

    for (int i = 0; i < len; i++)
    {
        cout<<nums[i]<<endl;
    }
    
    return 0;
}
