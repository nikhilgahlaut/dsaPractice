#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> nums = {2,5,1,3,4,7};
    int n = 3;
    vector<int> ans ;
    for(int i = 0; i<n ; i++){
        ans.push_back(nums[i]);
        ans.push_back(nums[i+n]);
    }

    for(int i = 0; i<2*n ; i++){
        cout<<ans[i];
    }
    cout<<endl;

    return 0;
}