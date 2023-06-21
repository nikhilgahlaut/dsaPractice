#include<iostream>
#include<vector>
using namespace std;
int main()
{ 
    vector <int> nums ={3,2,2,3};
    int val =3;
    int len = nums.size();
    int k =0;
    vector <int> newNums;
    for (int i = 0; i < len; i++)
    {
        if(nums[i]!= val){
            newNums.push_back(nums[i]);
            k++;
        }
    }
    cout<<"k ="<<k<<endl;
    int l = newNums.size();
    for (int i = 0; i < l; i++)
    {
        /* code */
        cout<<newNums[i]<< " ";
    }
    
    return 0;
}