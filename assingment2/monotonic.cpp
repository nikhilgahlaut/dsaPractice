#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool checkmono(vector<int> & nums)
{
    int n = nums.size();
    bool inc = true;
    bool dec = true;
    // not increasing(decreasing)
    for(int i = 0 ; i < n -1 ; i++){
        if(nums[i] > nums[i+1])
            inc = false;
        if(nums[i] < nums[i+1])
            dec = false;
    }
    cout<< inc <<dec<<endl;
    // not decreasing(increasing)
    return inc || dec;
    
}
int main()
{
    vector <int> nums = {1,2,2,2};
    cout<<checkmono(nums);
    return 0;

}