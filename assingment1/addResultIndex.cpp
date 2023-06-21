#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[] = {2,7,11,15};
    int len = sizeof(arr)/sizeof(int);
    int req = 9;
    for (int i = 0; i < len; i++)
    {
        for (int j = i+1 ;j < len; j++)
        {
            /* code */
            if(arr[i]+arr[j] == req){
                cout<<i<<","<<j;
                break;
            }
        }
        
    }
    return 0;
}
// Input: nums = [2,7,11,15], target = 9
// Output0 [0,1]
