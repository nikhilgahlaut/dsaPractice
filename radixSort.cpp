#include <iostream>
#include <vector>

using namespace std;
void countSort(vector<int> &v, int n, int pos){
    //calculate freq of size 10
    vector<int> freq(10,0);
    for(int i =0;i<n;i++){
        freq[(v[i]/pos)%10]++;
    }

    //calculate cummlative frequency
    for(int i = 1;i<10;i++){
        freq[i] += freq[i-1];
    }

    //calculate ans array
    vector<int> ans(n);
    for(int i = n-1;i>=0;i--){
        ans[--freq[(v[i]/pos)%10]] = v[i];
    }

    //copy the ans array to original array
    for(int i =0 ; i<n;i++){
        v[i] = ans[i];
    }

}
void radixSort(vector<int> &v, int n){
    //max element find
    int max_ele = INT8_MIN;
    for(int i =0 ; i<n;i++){
        max_ele = max(v[i],max_ele);
    }

    //implement countSort for each digits of max-ele
    for(int pos = 1; max_ele/pos > 0 ;pos *=10){
        countSort(v,n,pos);
    }
}

int main(){
    vector <int> v ={170, 45, 75, 90, 802, 24, 2, 66};
    int n=v.size();
    radixSort(v,n);
    for(int i =0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}