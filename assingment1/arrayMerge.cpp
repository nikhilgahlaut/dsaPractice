#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector <int> nums1= {1,3,2};
    int m = nums1.size();
    vector <int> nums2 = {2,5,6};
    int n = nums2.size();
    for(int i = 0 ;i< m;i++){
        nums1.push_back(nums2[i]);
    }
    for(int j =0 ;j<(m+n);j++){
        sort(nums1.begin(),nums1.end());
        cout<<nums1[j];
    }
    return 0;
}