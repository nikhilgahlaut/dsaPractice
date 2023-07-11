// Given two **0-indexed** integer arrays nums1 and nums2, return *a list* answer *of size* 2 *where:*

// - answer[0] *is a list of all **distinct** integers in* nums1 *which are **not** present in* nums2*.*
// - answer[1] *is a list of all **distinct** integers in* nums2 *which are **not** present in* nums1.

// **Note** that the integers in the lists may be returned in **any** order.

// **Example 1:**

// **Input:** nums1 = [1,2,3], nums2 = [2,4,6]

// **Output:** [[1,3],[4,6]]

#include<iostream>
#include<vector>
#include <unordered_set>
 
using namespace std;
vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2){
    vector<vector<int>> ans;
    unordered_set set1(nums1.begin(),nums1.end());
    unordered_set set2(nums2.begin(),nums2.end());
    for(int i = 0;i<nums2.size(); i++){
        set1.erase(nums2[i]);
    }
    vector<int> ans1;
    for(auto it: set1){
        ans1.push_back(it);

    }
    ans.push_back(ans1);
    ans1.clear();
    for(int i =0 ; i< nums1.size();i++){
        set2.erase(nums1[i]);
    }
    for(auto it:set2){
        ans1.push_back(it);
    }
    ans.push_back(ans1);
    // ans1.clear();
    return ans;



}

int main(){
    vector <int> nums1 = {1,2,3};
    vector <int> nums2 = {2,4,6};
    vector<vector<int>> ans = findDifference(nums1,nums2);
    for(int i = 0 ; i< ans.size();i++){
        for(int j = 0; j <ans[i].size();i++){
            cout<<ans[i][j]<<" ";
        }
    }
    return 0;
}