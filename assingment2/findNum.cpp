#include<iostream>
#include<vector>

using namespace std;

int findTarget(vector<int> &nums,int target){
    int n = nums.size();
    for(int i =0; i<n; i++){
        if(nums[i] == target) return i;
    }
    return -1;
}

int main(){
    int result = -1;
    vector<int> nums ={-1,0,3,5,9,12};
    int target = 9;
    cout<<findTarget(nums, target);
    
    return 0;
}