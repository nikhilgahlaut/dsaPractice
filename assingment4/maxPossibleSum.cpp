#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int maxPairSum(vector<int> nums){
    sort(nums.begin(),nums.end());
    int sum = 0;
    for(int i = 0; i < nums.size(); i +=2){
        sum += nums[i];
    }
    return sum;

}

int main(){
    vector <int> nums = {1,4,3,2}; //1 2 3 4
    int result = maxPairSum(nums);
    cout<<result;
    return 0;
}