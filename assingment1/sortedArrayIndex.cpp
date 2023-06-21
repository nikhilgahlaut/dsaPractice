// [1,2,3,4]
// index of 2 and if 2 is not present, then what should be its index if it was present;
#include<iostream>
#include<vector>
 using namespace std;
 int main()
 {
    vector <int> arr = {1,2,3,4,6,8,10};
    vector <int> arr1;
    int findIndexFor = 8;
    int len = arr.size();
    for (int i = 0; i < len; i++)
    {
        /* code */
        if (arr[i] == findIndexFor)
        {
            /* code */
            cout<<"Index for 8 is "<< i<<endl;
        }
    }
    
    return 0;
 }