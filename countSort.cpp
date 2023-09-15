#include<iostream>
#include<vector>

using namespace std;

//count sort algorithm
void countSort(vector<int> &v, int n){
    //max element of array
    int max_ele = v[0];
    for(int i =0 ;i <n;i++){
        max_ele = max(v[i],max_ele);
    }

    //calculate frequency
    vector<int> arr(max_ele + 1,0);
    for(int i = 0; i<n;i++){
        arr[v[i]]++;
    }

    //calculate cumilative frequency
    for(int i = 1 ; i<n;i++){
        arr[i] += arr[i-1];
    }

    //calculate the sorted array
    vector<int> ans(n);
    for(int i = n-1;i>=0;i--){
        ans[--arr[v[i]]] = v[i];
    }

    //put array into original array
    for(int i =0 ; i<n;i++){
        v[i] = ans[i];
    }
    
}

int main(){
    vector <int> v = {2,2,6,6,3,1,0};
    int n = v.size();

    countSort(v,n);

    for(int i =0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
