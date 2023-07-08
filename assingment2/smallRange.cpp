#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int smallRange(vector<int> &nums,int k){
    int n =  nums.size();
    int ele;
    int result;
    vector <int> temp;
    for(int i = 0 ; i< n ; i++){
        if(nums[i]<=k){
            ele = nums[i] + k;
            temp.push_back(ele);
        }
        else{
            ele = nums[i] - k;
            temp.push_back(ele);
        }
        sort(temp.begin(), temp.end());
        

    }
    result = temp[n-1] - temp[0];
    return result;
}

int main(){
    vector <int> nums = {0,10};
    int  k = 2;
    cout<<smallRange(nums,k);
    return 0;
}
