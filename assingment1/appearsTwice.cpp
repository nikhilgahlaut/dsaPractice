//[1,2,3,4,1]
// if any valude is present twice, print true


#include<iostream>
#include<vector>
using namespace std;
 int main()
 {
    vector <int> nums = {1,2,3,4,3};
    int len = nums.size();
    for (int i = 0; i < len-1; i++)
    {
        for (int j = i+1; i < len; i++)
        {
            if(nums[i] == nums[j])
            cout<<"true";
        }
        
    }
    
    return 0;
 }