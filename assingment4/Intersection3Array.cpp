// Given three integer arrays arr1, arr2 and arr3 **sorted** in **strictly increasing** order, return a sorted array of **only** the integers that appeared in **all** three arrays.

// **Example 1:**

// Input: arr1 = [1,2,3,4,5], arr2 = [1,2,5,7,9], arr3 = [1,3,4,5,8]

// Output: [1,5]

#include<iostream>
#include<vector>
 
using namespace std;

int main(){
    vector <int> arr1 = {1,2,3,4,5};
    vector <int> arr2 = {1,2,5,7,9};
    vector <int> arr3 = {1,3,4,5,8};
    int i =0,j=0,k=0;
    while ( arr1.size()> 0 && arr2.size() > 0 && arr3.size() > 0){
        if(arr1[i]==arr2[j] && arr2[j] == arr3[k]){
            cout<<arr1[i];
            i++;
            j++;
            k++;
        }
        else if(arr1[i] < arr2[j])
        {
            i++;
        }
        else if(arr2[j] < arr3[k])
        {
            j++;
        }
            
        else
        {
            k++;
        }

    }
    return 0;
}