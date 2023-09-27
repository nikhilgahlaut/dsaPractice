// find the first occurence of a given element x, given that the array is sorted.
// if no occurence of x is found , return -1
// input
// arr = 2,5,5,5,6,6,8,9,9,9
// x= 5   ans = 1

#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int> &v,int t){
    int l = 0;
    int r = v.size() - 1;
    int ans  = -1;
    while(l<=r){
        int mid = (l+r)/2;
        
        if(v[mid] == t){
            ans =  mid;
            r = mid -1;
        }
        else if(v[mid] > t) {
            r = mid -1;
        }

        else{
            l = mid +1;
        } 
    }
    
    return ans;
}

int main(){
    vector<int> v = {2,5,5,5,6,6,8,9,9,9};
    int n = v.size();
    int target = 5;
    cout<<firstOccurence(v, target);
    return 0;
}