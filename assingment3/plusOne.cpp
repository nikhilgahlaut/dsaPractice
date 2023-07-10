#include<iostream>
#include<vector>
#include<math.h>

using namespace std;
 
vector <int>plusOne( vector<int> &nums, int n){
    while(n>=0){
        if(nums[n] == 9)
        {
            nums[n] = 0;
        }
        else
        {

            nums[n]++;
            return nums;
        }
        
        n--;
    }
    nums.insert(nums.begin(), 1);
    return nums;

}

int main()
{
    vector<int> nums = {1,2,3,9};
    int n = nums.size() - 1;
    vector<int> result = plusOne(nums,n);

    for(int i = 0 ; i< result.size(); i++){
        cout<<result[i];
    }

    return 0;

}